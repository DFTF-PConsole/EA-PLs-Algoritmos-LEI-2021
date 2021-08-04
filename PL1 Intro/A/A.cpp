/*  AUTOR: Dario Felix N.2018275530  */

// Read a list of numbers until eof, and print them - Inspirado: https://git.dei.uc.pt/snippets/27 @Alexandre D. Jesus


#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int num1, num2;
    while (std::cin >> num1 >> num2) {
        std::cout << num1 * num2 << "\n";
    }
    

    return 0;
}

