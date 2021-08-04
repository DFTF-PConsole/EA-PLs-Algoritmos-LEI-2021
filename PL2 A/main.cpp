
#include <iostream>
#include <vector>
#include <algorithm>


#define FAIR "Fair"
#define RIGGED "Rigged"


bool calc(const std::vector <int>& vetor, int n);


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, temp;

    while(std::cin >> n) {
        std::vector <int> vetor;

        for (int i = 0 ; i < n ; i++) {
            std::cin >> temp;
            vetor.push_back(temp);
        }

        std::sort(vetor.begin(), vetor.end());

        if (calc(vetor, n))
            std::cout << FAIR << std::endl;
        else
            std::cout << RIGGED << std::endl;

        std::cin >> n;
    }

    return 0;
}


bool calc(const std::vector <int>& vetor, int n) {
    int i, ptr_inicio, ptr_fim, a, b, c, total;

    for (i = 0; i < n-2 && vetor[i+1] < 0; i++) {   // 2x (-) e 1x (+)
        ptr_inicio = i+1;
        ptr_fim = n-1;
        a = vetor[i];
        while (ptr_inicio < n-1 && vetor[ptr_inicio] < 0 && vetor[ptr_fim] > 0) {
            b = vetor[ptr_inicio];
            c = vetor[ptr_fim];
            total = a + b + c;
            if (total > 0)
                ptr_fim -= 1;
            else if (total < 0)
                ptr_inicio += 1;
            else
                return true;
        }
    }

    for (i = n-1; i > 1 && vetor[i-1] > 0; i--) {   // 2x (+) e 1x (-)
        ptr_inicio = i-1;
        ptr_fim = 0;
        a = vetor[i];
        while (ptr_inicio > 0 && vetor[ptr_inicio] > 0 && vetor[ptr_fim] < 0) {
            b = vetor[ptr_inicio];
            c = vetor[ptr_fim];
            total = a + b + c;
            if (total > 0)
                ptr_inicio -= 1;
            else if (total < 0)
                ptr_fim += 1;
            else
                return true;
        }
    }


    return false;
}