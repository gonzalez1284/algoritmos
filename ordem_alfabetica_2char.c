#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char a, b;
    
    printf("Digite o primeiro caracter: ");
    scanf(" %c", &a);
    
    printf("Digite o segundo caracter: ");
    scanf(" %c", &b);
    
    if(a > b){
     
        printf("%c %c\n", b, a);     
         
    } else {
           
        printf("%c %c\n", a, b);
    }
       
    system("pause");
    
    return 0;
    
}
