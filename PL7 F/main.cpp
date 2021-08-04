#include <iostream>
#include <algorithm>


int calc (int listaPosObjetos [], int numObjetosN, int rangeGuardaM);


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int numCasos, numObjetosN, rangeGuardaM, i, j, res;

    std::cin >> numCasos;

    for (i=0; i < numCasos; i++) {
        std::cin >> numObjetosN >> rangeGuardaM;

        int listaPosObjetos[numObjetosN];

        for (j=0 ; j < numObjetosN; j++) {
            std::cin >> listaPosObjetos[j];
        }

        res = calc(listaPosObjetos, numObjetosN, rangeGuardaM);
        std::cout << res << std::endl;
    }
    return 0;
}


int calc (int listaPosObjetos [], int numObjetosN, int rangeGuardaM) {
    int i, j;
    int listaPosGuardas[numObjetosN];

    std::sort(listaPosObjetos, listaPosObjetos + numObjetosN);

    listaPosGuardas[0] = listaPosObjetos[0] + rangeGuardaM;

    for (i=0, j=1 ; j < numObjetosN && i+1 < numObjetosN ; j++) {
        if (listaPosObjetos[j] <= listaPosGuardas[i] + rangeGuardaM) {
            continue;
        } else {
            i++;
            listaPosGuardas[i] = listaPosObjetos[j] + rangeGuardaM;
        }
    }

    return i+1;
}

