/*  AUTOR: Dario Felix N.2018275530  */


#include <iostream>
#include <string>
#include <cstdio>
#include <stack>


#define MAIS "+"
#define MENOS "-"
#define DELIMITADOR ' '


// Prototipos


// Funcoes
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string linha;
    std::string token;
    size_t pos;
    std::stack <int> pilha;
    int a;
    int b;
    int tam;

    std::getline(std::cin, linha);
    tam = std::stoi(linha);

    while (tam > 0 && std::getline(std::cin, linha)) {
        tam--;
        linha.append(" ");
        while ((pos = linha.find(DELIMITADOR)) != std::string::npos) {
            token = linha.substr(0, pos);
            if (token == MAIS) {
                b = pilha.top();
                pilha.pop();
                a = pilha.top();
                pilha.pop();
                pilha.push(a + b);
            } else {
                if (token == MENOS) {
                    b = pilha.top();
                    pilha.pop();
                    a = pilha.top();
                    pilha.pop();
                    pilha.push(a - b);
                } else {
                    pilha.push(std::stoi(token));
                }
            }
            linha.erase(0, pos + 1);
        }
        std::cout << pilha.top() << std::endl;
        pilha.pop();
    }

    return 0;
}

