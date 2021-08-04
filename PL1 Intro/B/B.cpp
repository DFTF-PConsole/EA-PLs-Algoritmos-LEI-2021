/*  AUTOR: Dario Felix N.2018275530  */

// Read a list of numbers until eof, and print them - Inspirado: https://git.dei.uc.pt/snippets/27 @Alexandre D. Jesus


#include <iostream>
#include <stack>


int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int total, i, temp;


    std::cin >> total;

    std::stack <int> pilha;

    for (i = 0; i < total; i++) {
        std::cin >> temp;
        pilha.push(temp);
    }
    
    if (total != 0) {
        std::cout << pilha.top();
        pilha.pop();
    }
    
    while (!pilha.empty()) {
        std::cout << ' ' << pilha.top();
        pilha.pop();
    }
    std::cout << std::endl;


    return 0;
}

