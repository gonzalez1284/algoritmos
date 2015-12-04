/*
 * 6) Crie um programa que solicite ao usuário um número de 001 até 999,
 *    sempre com 3 dígitos, e exiba a sequência invertida. Por exemplo:
 *      Digitado: 123		Invertido: 321
 *      Digitado: 491		Invertido: 194
 *      Digitado: 714		Invertido: 417
 *
 */
 
 #include <stdio.h>

 int main(){

    char v[3];

    scanf("%s", &v);

    printf("%c%c%c\n", v[2],v[1],v[0]);

    return 0;

 }
