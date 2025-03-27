#include <stdio.h>

// Função para imprimir a matriz
void imprimirMar(char mar[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", mar[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar os barcos manualmente
void posicionarBarcos(char mar[10][10]) {
    // Inicializa o mar com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mar[i][j] = '0';
        }
    }

    // Posiciona o super poder em formato de cruz
    if (0 < 10 && 2 < 10) mar[0][2] = '3';
    if (1 < 10 && 1 < 10) mar[1][1] = '3';
    if (1 < 10 && 2 < 10) mar[1][2] = '3';
    if (1 < 10 && 3 < 10) mar[1][3] = '3';
    if (2 < 10 && 0 < 10) mar[2][0] = '3';
    if (2 < 10 && 1 < 10) mar[2][1] = '3';
    if (2 < 10 && 2 < 10) mar[2][2] = '3';
    if (2 < 10 && 3 < 10) mar[2][3] = '3';
    if (2 < 10 && 4 < 10) mar[2][4] = '3';

    // Posiciona o super poder em formato de triângulo
    if (7 < 10 && 2 < 10) mar[7][2] = '3';
    if (8 < 10 && 0 < 10) mar[8][0] = '3';
    if (8 < 10 && 1 < 10) mar[8][1] = '3';
    if (8 < 10 && 2 < 10) mar[8][2] = '3';
    if (8 < 10 && 3 < 10) mar[8][3] = '3';
    if (8 < 10 && 4 < 10) mar[8][4] = '3';
    if (9 < 10 && 2 < 10) mar[9][2] = '3';

    // Posiciona o super poder em formato de octaedro
    if (3 < 10 && 7 < 10) mar[2][7] = '3';
    if (4 < 10 && 6 < 10) mar[4][6] = '3';
    if (4 < 10 && 7 < 10) mar[4][7] = '3';
    if (4 < 10 && 8 < 10) mar[4][8] = '3';
    if (5 < 10 && 7 < 10) mar[5][7] = '3';
}

int main() {
    char mar[10][10];

    // Posiciona os barcos
    posicionarBarcos(mar);

    // Imprime o mar com os barcos
    imprimirMar(mar);

    return 0;
}