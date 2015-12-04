/*
 *   3) Crie um programa que solicita um ano (com quatro dígitos) ao usuário, e informe se este ano é bissexto ou não.  
 *    (Regra: um ano é bissexto se for divisível por 4, mas não por 100, também é bissexto se for divisível por 400.)
 */
#include <stdio.h>

int main(){

    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if( ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)){

        printf("Ano bissexto\n");

    } else {

        printf("Nao e bissexto\n");
    }

    return 0;
	
}



