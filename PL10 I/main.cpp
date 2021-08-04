#include <iostream>
#include <queue>


#define INDICE(I, J, N)  (((I)*N) + (J))

#define NAO_EXISTE -1
#define INFINITO -2
#define NAO_VISITADO false
#define VISITADO true


int calcDijkstra (const int custosMatriz[], int vertices, int fonte, int destino);


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int vertices, destino, i, j, temp;

    std::cin >> vertices >> destino;

    int custosMatriz[vertices * vertices];

    for (i=0 ; i < vertices ; i++) {
        std::cin >> temp;
        for (j=0 ; j < vertices ; j++) {
            std::cin >> custosMatriz[INDICE(temp-1, j, vertices)];
        }
    }

    std::cout << calcDijkstra (custosMatriz, vertices, 0, destino-1) << std::endl;

    return 0;
}



int calcDijkstra (const int custosMatriz[], int vertices, int fonte, int destino) {
    int i, valorTemp, verticeTemp;
    int distanciasVetor[vertices];
    bool visitadoVetor[vertices];
    std::priority_queue<std::pair<int, int> > fila;

    // BASE
    for (i=0 ; i < vertices ; i++) {
        distanciasVetor[i] = INFINITO;
        visitadoVetor[i] = NAO_VISITADO;
    }
    distanciasVetor[fonte] = 0;
    visitadoVetor[fonte] = VISITADO;

    // INICIACAO
    for (i=0 ; i < vertices ; i++) {
        if(i!=fonte && (valorTemp=custosMatriz[INDICE(fonte, i, vertices)]) != NAO_EXISTE) {
            fila.push(std::make_pair(valorTemp * -1, i));
            distanciasVetor[i] = valorTemp;
        }

    }

    // EXECUCAO
    while (!fila.empty()) {
        if (visitadoVetor[fila.top().second] == VISITADO) {
            fila.pop();
            continue;
        }

        verticeTemp = fila.top().second;
        fila.pop();
        visitadoVetor[verticeTemp] = VISITADO;

        if (verticeTemp == destino)
            break;

        for (i=0 ; i < vertices ; i++) {
            if (i != verticeTemp && (valorTemp = custosMatriz[INDICE(verticeTemp, i, vertices)]) != NAO_EXISTE) {
                if (distanciasVetor[i] == INFINITO || distanciasVetor[i] > distanciasVetor[verticeTemp] + valorTemp) {
                    distanciasVetor[i] = distanciasVetor[verticeTemp] + valorTemp;
                    fila.push(std::make_pair(distanciasVetor[i] * -1, i));
                }
            }
        }
    }

    return distanciasVetor[destino];
}

