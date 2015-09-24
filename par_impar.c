#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
           
           printf("%d e PAR\n", num);
           
    } else {
           
           printf("%d e IMPAR\n", num);
           
    }
    
    system("pause");
    
    return 0;   
}
