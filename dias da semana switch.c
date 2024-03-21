#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero para escolher o dia da semana: ");
    scanf("%d", &num);


switch (num)
    {
case 1:
    printf("Domingo");
    break;
case 2:
    printf("Segunda");
    break;
case 3:
    printf("Terça");
    break;
case 4:
    printf("Quarta");
    break;
case 5:
    printf("Quinta");
    break;
case 6:
    printf("sexta");
    break;
case 7:
    printf("sabado");
    break;
    default:
    printf("numero digitado invalido");
        break;
    }
}