#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

//TABULEIRO
void inicializarTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0; 
        }
    }
}

//Barcos
void posicionarBarcos(int tabuleiro[LINHAS][COLUNAS]) {
    tabuleiro[1][1] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[4][0] = 3;
}

void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS];

    inicializarTabuleiro(tabuleiro);
    posicionarBarcos(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}

