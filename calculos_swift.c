#include<stdio.h>

int main(){
//definir variaveis
int n1,n2,opcao,resultado;

//escolher opção
printf("1-SOMAR\n");
printf("2-SUBTRAIR\n");
printf("3-MULTIPLICAR\n");
printf("4-DIVIDIR\n");
printf("5-RESTO DIVISAO\n");
scanf("%d", &opcao);

//digitar valores
printf("PRIMIERO VALOR: ");
scanf("%d", &n1);
printf("SEGUNDO VALOR: ");
scanf("%d", &n2);

//switch case
switch(opcao){
case 1:
    resultado = n1+n2;
    printf("resultado da soma: %d", resultado);
    break;
case 2:
    resultado = n1-n2;
    printf("resultado da subtracao: %d", resultado);
    break;
case 3:
resultado = n1*n2;
    printf("resultadoda da multiplicacao: %d", resultado);
    break;
case 4:
    resultado = n1/n2;
    printf("resultado da divisao: %d", resultado);
    break;
 case 5:
    resultado = n1%n2;
    printf("resultado resto da divisao: %d", resultado);
    break;               
default:
    printf("opcao invalida");


}

}