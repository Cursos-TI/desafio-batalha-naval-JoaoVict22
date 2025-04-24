#include <stdio.h>

int main(){

    int *tabuleiro[10][10] = {0};
    int navio1[3] = {3,3,3},navio2[3] = {3,3,3};

    int linha1 = 4, coluna1 = 2;
    int linha2 = 5, coluna2 = 6;

    for (int i = 0; i < 3; i++) {
        if (coluna1 + i < 10)
        {
            tabuleiro[linha1][coluna1 + i] = navio1[i];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        if (coluna1 + i < 10)
        {
            tabuleiro[linha2 + i][coluna2] = navio2[i];
        }
        
    }
    

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
}