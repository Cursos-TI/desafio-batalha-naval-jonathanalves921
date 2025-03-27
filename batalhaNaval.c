#include <stdio.h>


int tabuleiro1(int tabuleiro[10][10]) {
        for (int i = 0; i < 10; i++){

            for (int j = 0; j < 10; j++){
                tabuleiro[i][j] = 0;
            }
        }
        return 0;

    }


    int posnavio(int tabuleiro [10][10], int linha, int coluna, char orientacao){
        for (int i = 0; i <3; i++){
            if (orientacao == 'H'){
                tabuleiro[linha][coluna + i] = 3;
            } else if (orientacao == 'V'){
                tabuleiro[linha + i][coluna] = 3;
            }
        }
    }
    int tabuleiroterminal(int tabuleiro[10][10]){
        printf("  A B C D E F G H I J\n");
        for (int i = 0; i < 10; i++){
            printf("%2d", i + 1);
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]);
                } printf("\n");
        }
        return 0;
    }

    int main() {

    int tabuleiro[10][10];
    tabuleiro1 (tabuleiro);

    // Define as coordenadas iniciais e orientações dos navios
    int linhaNavio1 = 3, colunaNavio1 = 7;
    char orientacaoNavio1 = 'V';

    int linhaNavio2 = 1, colunaNavio2 = 1;
    char orientacaoNavio2 = 'H';


    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

   
