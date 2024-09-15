#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero,soma=0,digito;

    printf("Digite um numero inteiro :");
    scanf("%d",&numero);

    while (numero!=0){
        digito=numero%10;
        soma=soma+digito;
        numero=numero/10;
    }
    printf("A soma dos digitos : %d",soma);
    return 0;
}
