/*  AUTOR: Dario Felix N.2018275530  */


#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>


#define I "INSERT"
//#define M "MOVE"
#define L "LEFT"
//#define R "RIGHT"


// Classes
class No {
public:

    int num;
    No * prox;
    No * ant;

    No(int num, No* prox, No* ant) {
        this->num = num;
        this->prox = prox;
        this->ant = ant;
    }

};



// Vars Globais
No* raiz;
No* ptr_atual;



// Prototipos
void inputSplit(char* string, char** substring1, char** substring2, char** substring3);
void insertLeft(No* novo);
void insertRight(No* novo);
void moveLeft();
void moveRight();
void inicia();
void printLista();



// Funcoes
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    inicia();

    std::string linha;

    while (std::getline(std::cin, linha)) {
        const char* str_c = linha.c_str();
        size_t tam = (strlen(str_c)+1)*sizeof(char);
        char* str;
        char* substr1 = nullptr;
        char* substr2 = nullptr;
        char* substr3 = nullptr;
        int temp;

        str = (char*) malloc(tam);
        if (str == nullptr)
            exit(0);
        memcpy(str, str_c, tam);                    // https://stackoverflow.com/questions/7582394/strdup-or-strdup

        if (strcmp(str, "FIM") == 0)                // PRA TESTES
            break;

        inputSplit(str, &substr1, &substr2, &substr3);

        if (strcmp(substr1, I) == 0) {
            if (strcmp(substr2, L) == 0) {           // INSERT LEFT N
                temp = atoi(substr3);
                insertLeft(new No(temp, nullptr, nullptr));

            } else {                                // INSERT RIGHT N
                temp = atoi(substr3);
                insertRight(new No(temp, nullptr, nullptr));
            }
        } else {
            if (strcmp(substr2, L) == 0) {           // MOVE LEFT
                moveLeft();

            } else {                                // MOVE RIGHT
                moveRight();

            }
        }
        free(str);
    }

    printLista();

    return 0;
}



void inputSplit(char * string, char** substring1, char** substring2, char** substring3) {
    int i;

    *substring1 = &string[0];

    for ( i=0 ; string[i] != '\0' && *substring2 == nullptr; i++) {
        if (string[i] == ' ') {
            string[i] = '\0';
            *substring2 = &string[i+1];
        }
    }

    for ( ; string[i] != '\0' && *substring3 == nullptr; i++) {
        if (string[i] == ' ') {
            string[i] = '\0';
            *substring3 = &string[i+1];
        }
    }
}



void insertLeft(No* novo) {
    novo->prox = ptr_atual;
    novo->ant = ptr_atual->ant;
    ptr_atual->ant = novo;
    if (novo->ant == nullptr)
        raiz = novo;
    else
        novo->ant->prox = novo;
}



void insertRight(No* novo) {
    novo->prox = ptr_atual->prox;
    novo->ant = ptr_atual;
    ptr_atual->prox = novo;
    if (novo->prox != nullptr)
        novo->prox->ant = novo;
}



void moveLeft() {
    if (ptr_atual->ant != nullptr)
        ptr_atual = ptr_atual->ant;
}



void moveRight() {
    if (ptr_atual->prox != nullptr)
        ptr_atual = ptr_atual->prox;
}



void inicia() {
    raiz = new No(0, nullptr, nullptr);
    ptr_atual = raiz;
}



void printLista() {
    No* ptr = raiz;
    for (; ptr != nullptr; ptr = ptr->prox)
        std::cout << ptr->num << std::endl;
}


