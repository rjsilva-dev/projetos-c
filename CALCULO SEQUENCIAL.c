#include <stdio.h>
int main(){

//definir variavel principal
int numero;

//texto aparecer no console
printf("Digite um numero abaixo, para ser somado com 3, ate chegar ao 135 ou proximo\n");

//capturar numero digitado
scanf("%d",&numero);

//formula
for (int x=numero; x<=135; x= x+3){

    //printar na tela resultado
    printf("%d\n", x);
}

}