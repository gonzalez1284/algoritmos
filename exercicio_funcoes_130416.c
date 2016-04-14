#include <stdio.h>

/* PROTOTYPES */
int escolheOpcao();
void soma(int a, int b, int c);
void ehPar(int a, int b);
void cEhPositivo(int c);
void imprimeRange(int a, int b, int c);
void escolheValores( int *a, int *b, int *c);
void finalizaMenu();

int main(){

    int a = 0, b = 0, c = 0, opt = 0;

    printf("Exercício pratico 01\n\n");

    escolheValores(&a, &b, &c);

    do{

        opt = escolheOpcao();

        switch(opt){

            case 1:
                soma(a, b, c);
                break;
            case 2:
                ehPar(a,b);
                break;
            case 3:
                cEhPositivo(c);
                break;
            case 4:
                imprimeRange(a,b,c);
                break;
            case 5:
                escolheValores(&a, &b, &c);
                break;
            case 6:
                finalizaMenu();
                break;
            default:
                printf("Escolha uma opcao valida!");
                break;

        }

        printf("\n");
        system("pause");
        system("cls");

    } while(opt != 6);

    return 0;

}


// opt
int escolheOpcao(){

    int opt = 0;

    printf("\n\nMenu de operacoes.\n\n");
    printf("1 - Somar A + B + C\n");
    printf("2 - Informar se (A), (B) sao pares\n");
    printf("3 - Informar se C e positivo ou negativo\n");
    printf("4 - Contagem X = ? (Menor e Maior entre A, B e C\n");
    printf("5 - Escolher novos Valores A, B, C\n");
    printf("6 - Sair do Menu\n\n");

    printf("Escolha um opcao: ");
    scanf("%d", &opt);

    return opt;
}

// 1
void soma(int a, int b, int c){

    printf("Soma das variaveis = %d\n", (a + b + c));

}

// 2
void ehPar(int a, int b){

    if(a % 2 == 0){

        printf("a e par\n");

    } else {

        printf("a nao e par\n");

    }

    if(b % 2 == 0){

        printf("b e par\n");

    } else {

        printf("b nao e par\n");
    }
}

// 3
void cEhPositivo(int c){

    if(c > 0){

        printf("C e positivo\n");

    } else if(c == 0) {

        printf("C e nulo\n");

    } else {

        printf("C e negativo\n");

    }

}

// 4
void imprimeRange(int a, int b, int c){

    int me = 0;
    int ma = 0;

    if(a > b){

        ma = a;
        me = b;

    } else {

        ma = b;
        me = a;

    }

    if(c > ma){

        ma = c;

    } else if(c < me){

        me = c;
    }

    for(me; me <= ma; me++){

            printf("X = %d\n", me);

    }



}

// 5
void escolheValores(int *a, int *b, int *c){

    printf("Digite o valor de A: ");
    scanf("%d", a);
    printf("Digite o valor de B: ");
    scanf("%d", b);
    printf("Digite o valor de C: ");
    scanf("%d", c);

}

//6
void finalizaMenu(){

    printf("Obrigado por utilizar nossos programas\n");
    printf("Volte sempre!!\n");
    exit(0);

}


