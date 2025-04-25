#include <stdio.h>

#define linhas 10
#define colunas 10

int main(){
    int tabuleiro[linhas][colunas] = {0};

    //navio horizontal 1
    tabuleiro[3][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[5][6] = 3;

    //navio horizontal 2

    tabuleiro[0][2] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][0] = 3;

    //navio vertical

    tabuleiro[0][8] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][8] = 3;

    //navio horizontal

    tabuleiro[8][0] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;


    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}