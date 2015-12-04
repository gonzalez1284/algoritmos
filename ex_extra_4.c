/*
 * 4) A sequência de números de Fibonacci obedece a seguinte forma: os dois primeiros
 * termos têm o valor 1 e cada termo seguinte é igual à soma dos dois anteriores.
 * 1,1,2,3,5,8,13,21
 * Escreva um programa que solicite ao usuário o número do termo da sequência de Fibonacci
 * e calcule o valor desse termo. Por exemplo, se o número fornecido pelo usuário for 7,
 * o programa deverá encontrar e imprimir o valor 13.
 *
 */
#include <stdio.h>

int main(){

    int p, i;

    // LE A POSICAO A SER EXIBIDA
    scanf("%d", &p);

    // CRIA UM VETOR DO TAMANHO NECESSÁRIO
    int v[p];

    // INICIALIZA A SEQUENCIA
    v[0] = 1;
    v[1] = 1;

    // CALCULA A SEQUENCIA ATE A POSICAO SOLICITADA
    for(i = 2; i < p; i++){

        v[i] = v[i - 1] + v[i - 2];

    }

    // EXIBE O VALOR
    // COMO O VETOR INICIA COM 0, EXIBE A POSICAO - 1
    printf("%d\n", v[p - 1]);

    return 0;

}
