#include <iostream>


#define INDICE(I, J, N)  (((I)*N) + (J))


int calc (const int dados [], int linhas);

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int numCasos, linhas, t1, i, j, res;

    std::cin >> numCasos;

    for (t1=0; t1 < numCasos; t1++) {
        std::cin >> linhas;

        int dados[linhas * linhas];


        for (i=0 ; i < linhas; i++) {
            for (j=0 ; j <= i; j++) {
                std::cin >> dados[INDICE(i, j, linhas)];
            }
            for ( ; j < linhas; j++) {
                dados[INDICE(i, j, linhas)] = 0;
            }
        }

        res = calc(dados, linhas);
        std::cout << res << std::endl;
    }
}


int calc (const int dados [], int linhas) {
    int lAtual[linhas];
    int lAnterior[linhas];

    int i, j, z, best;

    for (z=0 ; z < linhas; z++)
        lAnterior[z] = lAtual[z] = 0;

    for (i=0 ; i < linhas; i++) {
        for (j=0 ; j <= i; j++) {
            if (i == 0)
                lAtual[j] = dados[INDICE(i, j, linhas)];
            else if (j == 0)
                lAtual[j] = dados[INDICE(i, j, linhas)] + lAnterior[j];
            else
                lAtual[j] = dados[INDICE(i, j, linhas)] + std::max(lAnterior[j], lAnterior[j-1]);
        }

        for (z=0 ; z < linhas; z++)
            lAnterior[z] = lAtual[z];
    }

    best = 0;

    for (j=0 ; j < linhas; j++)
        best = std::max(best, lAtual[j]);

    return best;
}
