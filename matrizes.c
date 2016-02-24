#include <stdio.h>

int main(){

    int l = 3;
    int c = 3;
    char matriz[l][c];

    imprimePontos();

    // A
    printf("\nMatriz A\n\n");

    limpaMatriz(l, c, matriz);

    matrizA(l, c, matriz);

    exibeMatriz(l, c, matriz);

    // B
    printf("\nMatriz B\n\n");

    limpaMatriz(l, c, matriz);

    matrizB(l, c, matriz);

    exibeMatriz(l, c, matriz);

    // C
    printf("\nMatriz C\n\n");

    limpaMatriz(l, c, matriz);

    matrizC(l, c, matriz);

    exibeMatriz(l, c, matriz);

    // D
    printf("\nMatriz D\n\n");

    limpaMatriz(l, c, matriz);

    matrizD(l, c, matriz);

    exibeMatriz(l, c, matriz);

    // E
    printf("\nMatriz E\n\n");

    limpaMatriz(l, c, matriz);

    matrizE(l, c, matriz);

    exibeMatriz(l, c, matriz);

    printf("\nMatriz F\n\n");

    limpaMatriz(l, c, matriz);

    matrizA(l, c, matriz);

    exibeMatriz(l, c, matriz);

    limpaMatriz(l, c, matriz);

    matrizB(l, c, matriz);

    exibeMatriz(l, c, matriz);

    return 0;
}

void limpaMatriz(int l, int c, char matriz[l][c]){

    int i,j;

    for(i = 0; i < l; i++){

        for(j = 0; j < c; j++){

            matriz[i][j] = ' ';

        }

    }

}

void exibeMatriz(int l, int c, char matriz[l][c]){

    int i, j;

    for(i = 0; i < l; i++){

        for(j = 0; j < c; j++){

            printf(" %c ", matriz[i][j]);

        }

        printf("\n");

    }

}

void imprimePontos(){

    int i = 0;

    for(i = 0; i < 3; i++){

         printf(" * ");

    }

}

void matrizA(int l, int c, char matriz[l][c]){

    int i, j, k = 1;

    for(i = 0; i < l; i++){

        for(j = 0; j < k; j++){

            matriz[i][j] = '*';

        }

        k++;

    }

}

void matrizB(int l, int c, char matriz[l][c]){

    int i, j, k = 3;

    for(i = 0 ; i < l; i++){

        for(j = 0; j < k; j++){

            matriz[i][j] = '*';

        }
        k--;

    }

}

void matrizC(int l, int c, char matriz[l][c]){

    int i, j, k = 2;

    for(i = 0; i < l; i++){

        for(j = k; j < 3; j++){

            matriz[i][j] = '*';

        }

        k--;

    }

}

void matrizD(int l, int c, char matriz[l][c]){

    int i, j, k = 0;

    for(i = 0; i < l; i++){

        for(j = k; j < c; j++){

            matriz[i][j] = '*';

        }

        k++;

    }


}

void matrizE(int l, int c, char matriz[l][c]){

    int i, j;

    for(i = 0; i < l; i++){

        for(j = 0; j < c; j++){

            matriz[i][j] = '*';

        }

    }

}
