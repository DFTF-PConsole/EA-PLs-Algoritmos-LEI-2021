/*  AUTOR: Dario Felix N.2018275530  */


#include <iostream>
#include <map>


#define ADD "ADD"
//#define REQUEST "REQUEST"
#define DELIMITADOR ' '
#define IMPOSSIVEL "impossible"


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string linha;
    std::string token;
    size_t pos;
    int num;

    std::map <int, int> lista;
    std::map<int, int>::iterator iterador;

    while (std::getline(std::cin, linha)) {
        linha.append(" ");
        pos = linha.find(DELIMITADOR);
        token = linha.substr(0, pos);
        linha.erase(0, pos + 1);

        pos = linha.find(DELIMITADOR);
        num = std::stoi(linha.substr(0, pos));

        if (token == ADD) {
            if (lista.find(num) != lista.end()) { // Se Existir
                lista[num]++;
            } else {    // Se NAO Existir
                lista.insert(std::make_pair(num, 1));
            }
        } else {    // REQUEST
            if (lista.find(num) != lista.end()) { // Se Existir
                lista[num]--;
                if (lista[num] <= 0)
                    lista.erase(num);
                std::cout << num << std::endl;
            } else {    // Se NAO Existir
                iterador = lista.upper_bound(num);
                if (iterador != lista.end()) {
                    std::cout << (int) iterador->first << std::endl;
                    lista[iterador->first]--;
                    if (lista[iterador->first] <= 0)
                        lista.erase(iterador->first);
                } else {
                    std::cout << IMPOSSIVEL << std::endl;
                }
            }
        }
    }

    return 0;
}

