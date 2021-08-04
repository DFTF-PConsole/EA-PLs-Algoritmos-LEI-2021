#include <iostream>
#include <queue>


#define NO "NO"
#define NOT_SURE "NOT SURE"
#define SEM_COR -1
#define COR_A 0
#define COR_B 1
#define VIZINHO true
#define NAO_VIZINHO false


#define INDICE(I, J, N)  (((I)*N) + (J))


bool calc (int no, int nTrainsAndStations, const bool matrizPares[]);


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, x, y;
    int nTrainsAndStations, mPair, nTrainsAndStationsQuadrado;
    //bool acumula;

    while (std::cin >> nTrainsAndStations >> mPair) {
        nTrainsAndStationsQuadrado = nTrainsAndStations * nTrainsAndStations;
        bool matrizPares[nTrainsAndStationsQuadrado];

        for (i=0 ; i < nTrainsAndStationsQuadrado ; i++)
            matrizPares[i] = NAO_VIZINHO;

        for (i=0 ; i < mPair ; i++) {
            std::cin >> x >> y;
            matrizPares[INDICE(x-1, y-1, nTrainsAndStations)] = matrizPares[INDICE(y-1, x-1, nTrainsAndStations)] = VIZINHO;
        }

        //for (i=0, acumula = true ; i < nTrainsAndStations && acumula ; i++)
            //acumula = calc(i, nTrainsAndStations, matrizPares);

        if (calc(0, nTrainsAndStations, matrizPares))
            std::cout << NOT_SURE << std::endl;
        else
            std::cout << NO << std::endl;
    }
    return 0;
}


bool calc (int no, int nTrainsAndStations, const bool matrizPares[]) {
    int noVizinho;
    int listaNosCores[nTrainsAndStations];
    std::queue<int> fila;

    for (int i=0 ; i < nTrainsAndStations ; i++)
        listaNosCores[i] = SEM_COR;

    fila.push(no);
    listaNosCores[no] = COR_A;

    while (!fila.empty()) {
        no = fila.back();
        fila.pop();

        for (noVizinho=0 ; noVizinho < nTrainsAndStations ; noVizinho++) {
            if (matrizPares[INDICE(no, noVizinho, nTrainsAndStations)] == NAO_VIZINHO)
                continue;

            if (listaNosCores[noVizinho] != SEM_COR) {
                if (listaNosCores[no] == listaNosCores[noVizinho])
                    return false;
            } else {
                fila.push(noVizinho);
                if (listaNosCores[no] == COR_A)
                    listaNosCores[noVizinho] = COR_B;
                else
                    listaNosCores[noVizinho] = COR_A;
            }
        }
    }

    return true;
}

