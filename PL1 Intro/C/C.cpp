/*  AUTOR: Dario Felix N.2018275530  */

// Read a list of numbers until eof, and print them - Inspirado: https://git.dei.uc.pt/snippets/27 @Alexandre D. Jesus


#include <iostream>
#include <list>


int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int temp;

    std::list <int> lista;

    while (std::cin >> temp)
        lista.push_back(temp);

    lista.sort();

    for(int n : lista)
        std::cout << n << std::endl;

    return 0;
}

