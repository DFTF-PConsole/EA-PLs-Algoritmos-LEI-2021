#include <iostream>


#define INDICE(I, J, N)  (((I)*N) + (J))
#define IMPOSSIVEL "NO WAY!"


int best;
int n_nodes, k_maximumLinks;



void calc(const int dadosCusto[], bool dadosNosAtivos[], int dadosLinksAtivos[], int numNosAtivados, int custoAtual);



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m_links, tempCusto, i, j, z;

    while (std::cin >> n_nodes >> m_links >> k_maximumLinks) {
        int dadosCusto[n_nodes*n_nodes];

        for (z=0 ; z < n_nodes*n_nodes; z++)
            dadosCusto[z] = -1;

        best = 1;

        for (z=0 ; z < m_links; z++) {
            std::cin >> i >> j >> tempCusto;
            best = best + tempCusto;
            dadosCusto[INDICE(i-1,j-1,n_nodes)] = tempCusto;
            dadosCusto[INDICE(j-1,i-1,n_nodes)] = tempCusto;
        }

        bool dadosNosAtivos[n_nodes];
        int dadosLinksAtivos[n_nodes];

        for (z=0 ; z < n_nodes; z++) {
            dadosNosAtivos[z] = false;
            dadosLinksAtivos[z] = 0;
        }

        dadosNosAtivos[0] = true;
        tempCusto = best;
        calc(dadosCusto, dadosNosAtivos, dadosLinksAtivos, 1, 0);
        (tempCusto == best) ? (std::cout << IMPOSSIVEL << std::endl) : (std::cout << best << std::endl);
    }

    return 0;
}


void calc(const int dadosCusto[], bool dadosNosAtivos[], int dadosLinksAtivos[], int numNosAtivados, int custoAtual) {
    if (custoAtual >= best)
        return;
    if (numNosAtivados >= n_nodes) {
        best = custoAtual;
        return;
    }

    int i, j;

    for (i=0; i < n_nodes; i++) {
        if (dadosNosAtivos[i] && (dadosLinksAtivos[i] < k_maximumLinks)) {
            for (j=0; j < n_nodes; j++) {
                if (!dadosNosAtivos[j]) {
                    if (dadosCusto[INDICE(i,j,n_nodes)] != -1) {
                        dadosLinksAtivos[i]++;
                        dadosLinksAtivos[j]++;
                        dadosNosAtivos[j] = true;
                        calc(dadosCusto, dadosNosAtivos, dadosLinksAtivos, numNosAtivados + 1, custoAtual + dadosCusto[INDICE(i,j,n_nodes)]);
                        dadosLinksAtivos[i]--;
                        dadosLinksAtivos[j]--;
                        dadosNosAtivos[j] = false;
                    }

                }
            }
        }
    }
}