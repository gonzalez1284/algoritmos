#include <stdio.h>

int main(){

    int i, j, x;

    scanf("%d", &x);

    printf("\n------------ Exemplo 1 ------------\n\n");

    for(i = 0; i < x; i++){

        for(j = 0; j < x; j++){

            printf("* ");

        }

        printf("\n");

    }

    // matriz 2

    printf("\n------------ Exemplo 2 ------------\n\n");

    int k = 1;

    for(i = 0; i < x; i++){

        for(j = 0; j < k; j++){

            printf("* ");

        }

        k++;

        printf("\n");

    }

    printf("\n------------ Exemplo 3 ------------\n\n");

    k = x;

    for(i = 0; i < x; i++){

        for(j = 0; j < k; j++){

            printf("* ");

        }
        k--;
        printf("\n");

    }

    printf("\n------------ Exemplo 4 ------------\n\n");

    k = 0;

    for(i = 0; i < x; i++){

        for(j = 0; j < x; j++){

            printf( j >= k ? "* " : "  " );

        }
        k++;
        printf("\n");

    }

    printf("\n------------ Exemplo 5 ------------\n\n");

    k = x - 1;

    for(i = 0; i < x; i++){

        for(j = 0; j < x; j++){

            printf( j < k ? "  " : "* " );

        }

        k--;
        printf("\n");


    }

   return 0;
}
