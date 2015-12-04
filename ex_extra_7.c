/*
 * 7) Um apostador da megasena sempre joga números sequências, obedecendo sempre o mesmo padrão, 
 * sempre com um número inicial aleatório.
 * Veja os exemplos, descubra o padrão, e crie um programa que a partir do primeiro número 
 * informe os demais cinco números do apostador.
 *
 * Exemplo 1:  5, 7, 14, 18, 19, 55.
 * Exemplo 2:  3, 5, 10, 14, 15, 57.
 * Exemplo 3:  1, 3, 6, 10, 11, 59.
 * Exemplo 4:  11, 13, 26, 30, 31, 49.
 * Exemplo 5:  8, 10, 20, 24, 25, 52.
 *
 * Padrão da sequência:
 * x , x + 2 , x * 2 , x + 4 , x + 1, 60 - primeiro valor informado em x
 *
 */
#include <stdio.h>

int main(){
  
    int s[6];

    printf("Digite o primeiro termo: ");
    scanf("%d", &s[0]);

    s[1] = s[0] + 2;
    s[2] = s[1] * 2;
    s[3] = s[2] + 4;
    s[4] = s[3] + 1;
    s[5] = 60 - s[0];

    printf("%d, %d, %d, %d, %d, %d\n", s[0], s[1], s[2], s[3], s[4], s[5]);

    return 0;
}
