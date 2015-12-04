/*
 *
 * 5) Crie um programa que exiba a tabela ASCII, dos caracteres 32 a 255.
 *    Depois solicite ao usuário escolher um número de 32 a 255 e exiba o
 *    caractere correspondente da tabela ASCII.
 *
 */
#include <stdio.h>

int main(){

    int x;

    printf("------------ TABELA ASCII DE 32 a 255 ------------\n");
    
    for(x = 32; x <= 255; x++){

        printf("%d: %c\n", x, x);

    }
    
    printf("------------ FIM DA TABELA ASCII DE 32 a 255 ------------\n");

    printf("Digite um numero de 32 e 255: ");
    scanf("%d", &x);
    printf("Caracter ASCII: %c", x);

    return 0;

}
