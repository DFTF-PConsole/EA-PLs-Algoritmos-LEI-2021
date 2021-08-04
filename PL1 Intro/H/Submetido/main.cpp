/*  AUTOR: Dario Felix N.2018275530  */


#include <iostream>
#include <map>


#define ADD "ADD"
#define REM "REM"
//#define QUERY "QUERY"
#define DELIMITADOR ' '
#define IMPOSSIVEL "removal refused"


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string linha;
    std::string token;
    size_t pos;
    int copias;
    int id;

    std::map <int, int> lista;

    while (std::getline(std::cin, linha)) {
        linha.append(" ");
        pos = linha.find(DELIMITADOR);
        token = linha.substr(0, pos);

        if (token == ADD) {
            linha.erase(0, pos + 1);
            pos = linha.find(DELIMITADOR);
            copias = std::stoi(linha.substr(0, pos));

            linha.erase(0, pos + 1);
            pos = linha.find(DELIMITADOR);
            id = std::stoi(linha.substr(0, pos));

            if (lista.find(id) != lista.end()) { // Se Existir
                lista[id] += copias;
            } else {    // Se NAO Existir
                lista.insert(std::make_pair(id, copias));
            }
        } else {    // REM
            if (token == REM) {
                linha.erase(0, pos + 1);
                pos = linha.find(DELIMITADOR);
                copias = std::stoi(linha.substr(0, pos));

                linha.erase(0, pos + 1);
                pos = linha.find(DELIMITADOR);
                id = std::stoi(linha.substr(0, pos));

                if (lista.find(id) != lista.end() && lista[id] >= copias) { // Se Existir
                    lista[id] -= copias;
                    if (lista[id] <= 0)
                        lista.erase(id);
                } else {    // Se impossivel
                    std::cout << IMPOSSIVEL << std::endl;
                }
            } else {    // QUERY
                linha.erase(0, pos + 1);
                pos = linha.find(DELIMITADOR);
                id = std::stoi(linha.substr(0, pos));

                if (lista.find(id) != lista.end()) { // Se Existir
                    std::cout << lista[id] << std::endl;
                } else {    // Se impossivel
                    std::cout << 0 << std::endl;
                }
            }
        }
    }

    return 0;
}

