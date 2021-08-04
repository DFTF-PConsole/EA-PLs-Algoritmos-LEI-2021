/*  AUTOR: Dario Felix N.2018275530  */


#include <iostream>


// Prototipos


// Funcoes
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tam, x, y, tempo = 0;
    std::cin >> tam;

    while (tam > 0) {
        tam--;

        std::cin >> x >> y;

        tempo = tempo + ( x > tempo ? ((x - tempo) + y) : (y) );
    }

    std::cout << tempo << std::endl;

    return 0;
}

