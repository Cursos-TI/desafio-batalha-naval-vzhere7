#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10];
    // Inicialização do tabuleiro com 0 = água
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Posiciona o navio 1 - horinzontal
    if (tabuleiro[0][0] == 0 && tabuleiro[0][1] == 0 && tabuleiro[0][2] == 0){
        tabuleiro[0][0] = 3;
        tabuleiro[0][1] = 3;
        tabuleiro[0][2] = 3;

    }
    // Posiciona o navio 2 - vertical
    if (tabuleiro[7][9] == 0 && tabuleiro[8][9] == 0 && tabuleiro[9][9] == 0) {
        tabuleiro[7][9] = 3;
        tabuleiro[8][9] = 3;
        tabuleiro[9][9] = 3;

    }
    //posicionamento do navio 3 = diagonal direita - esquerda - cima - baixo
    if (tabuleiro[3][3] == 0 && tabuleiro[4][4] == 0 && tabuleiro[5][5] == 0) {
        tabuleiro[3][3] = 3;
        tabuleiro[4][4] = 3;
        tabuleiro[5][5] = 3;

    }
    // posicionamento do navio 4 = diagonal esquerda - direita - baixo - cima
    if (tabuleiro[2][6] == 0 && tabuleiro[3][5] == 0 && tabuleiro[4][4] == 0) {
        tabuleiro[2][6] = 3;
        tabuleiro[3][5] = 3;
        tabuleiro[4][4] = 3;
    } else {
        if(tabuleiro[6][6] == 0 & tabuleiro[7][5] == 0 && tabuleiro[8][4] == 0){
            tabuleiro[6][6] = 0;
            tabuleiro[7][5] = 0;
            tabuleiro[8][4] = 0;

        }
    }

    printf("Tabuleiro Batalha Naval: \n");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d", tabuleiro[i][j]);

        }
        printf("\n");
    }
    return 0;

}    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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