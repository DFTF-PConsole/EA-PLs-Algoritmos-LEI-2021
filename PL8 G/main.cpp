#include <iostream>


#define CONHECE true
#define DESCONHECE false


#define INDICE(I, J, N)  (((I)*N) + (J))


int best;
int nNumMembros;
int mNumConexoes;
int nNumMembrosQuadrado;



void calc (int ultimaPessoa, int tamanho, const bool matrizConexoes [], int vetorAuxVizinhos []);


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, x, y;

    std::cin >> nNumMembros >> mNumConexoes;
    nNumMembrosQuadrado = nNumMembros * nNumMembros;

    bool matrizConexoes[nNumMembrosQuadrado];

    for (i=0 ; i < nNumMembrosQuadrado ; i++) {
        matrizConexoes[i] = DESCONHECE;
    }

    for (i=0; i < mNumConexoes; i++) {
        std::cin >> x >> y;
        matrizConexoes[INDICE(x, y, nNumMembros)] = matrizConexoes[INDICE(y, x, nNumMembros)] = CONHECE;
    }

    int vetorAuxVizinhos[nNumMembros];

    for (i=0 ; i < nNumMembros ; i++) {
        vetorAuxVizinhos[i] = 0;
    }

    best = 0;
    for (i=0; i < mNumConexoes; i++)
        calc(i,1, matrizConexoes, vetorAuxVizinhos);

    std::cout << best << std::endl;

    return 0;
}



void calc (int ultimaPessoa, int tamanho, const bool matrizConexoes [], int vetorAuxVizinhos []) {
    if (tamanho > best)
        best = tamanho;

    if (ultimaPessoa == nNumMembros)
        return;

    int pessoa;
    int upperBound;

    for (upperBound = 0, pessoa=ultimaPessoa+1 ; pessoa < nNumMembros; pessoa++) {
        if (vetorAuxVizinhos[pessoa] == 0)
            upperBound++;
    }

    if (tamanho + upperBound <= best)
        return;

    for (pessoa=ultimaPessoa+1 ; pessoa < nNumMembros; pessoa++) {
        if (matrizConexoes[INDICE(ultimaPessoa, pessoa, nNumMembros)] == CONHECE)
            vetorAuxVizinhos[pessoa]++;
    }

    for (pessoa=ultimaPessoa+1 ; pessoa < nNumMembros; pessoa++) {
        if (vetorAuxVizinhos[pessoa] == 0)
            calc(pessoa,tamanho + 1, matrizConexoes, vetorAuxVizinhos);
    }

    for (pessoa=ultimaPessoa+1 ; pessoa < nNumMembros; pessoa++) {
        if (matrizConexoes[INDICE(ultimaPessoa, pessoa, nNumMembros)] == CONHECE)
            vetorAuxVizinhos[pessoa]--;
    }
}


