#include <stdio.h>
/*
 *  1) Crie um programa que exiba na tela os múltiplos de 3, entre o intervalo de 3 a 100.
 *     Exemplo: 3, 6, 9, 12.
 */

int main(){

    int i;

    // INICIA COM 3 E INCREMENT COM MAIS 3 A CADA CICLO DO LOOP
    for(i = 3; i < 100; i = i + 3){

        printf("%d\n", i);

    }
  
    return 0;
}
