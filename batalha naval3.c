#include <stdio.h>

// Função auxiliar para calcular o valor absoluto de um inteiro
int int_abs(int x) {
    return (x < 0) ? -x : x;
}

void inicializarMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }
}

void exibirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void gerarCone(int linhas, int colunas, int matriz[linhas][colunas], int centro_x, int centro_y) {
    inicializarMatriz(linhas, colunas, matriz);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i >= centro_x && int_abs(j - centro_y) <= (i - centro_x)) {
                matriz[i][j] = 1;
            }
        }
    }
}

void gerarCruz(int linhas, int colunas, int matriz[linhas][colunas], int centro_x, int centro_y) {
    inicializarMatriz(linhas, colunas, matriz);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == centro_x || j == centro_y) {
                matriz[i][j] = 1;
            }
        }
    }
}

void gerarOctaedro(int linhas, int colunas, int matriz[linhas][colunas], int centro_x, int centro_y) {
    inicializarMatriz(linhas, colunas, matriz);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (int_abs(i - centro_x) + int_abs(j - centro_y) <= 1) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int linhas = 5;
    int colunas = 5;

    int matrizCone[linhas][colunas];
    int matrizCruz[linhas][colunas];
    int matrizOctaedro[linhas][colunas];

    int centro_x_cone = 0;
    int centro_y_cone = 2;

    int centro_x_cruz = 2;
    int centro_y_cruz = 2;

    int centro_x_octaedro = 2;
    int centro_y_octaedro = 2;

    printf("--- Habilidade em Cone ---\n");
    gerarCone(linhas, colunas, matrizCone, centro_x_cone, centro_y_cone);
    exibirMatriz(linhas, colunas, matrizCone);

    printf("--- Habilidade em Cruz ---\n");
    gerarCruz(linhas, colunas, matrizCruz, centro_x_cruz, centro_y_cruz);
    exibirMatriz(linhas, colunas, matrizCruz);

    printf("--- Habilidade em Octaedro ---\n");
    gerarOctaedro(linhas, colunas, matrizOctaedro, centro_x_octaedro, centro_y_octaedro);
    exibirMatriz(linhas, colunas, matrizOctaedro);

    return 0;
}
