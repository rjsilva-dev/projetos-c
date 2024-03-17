//Crie um programa em C, para mostrar na tela a soma, 
//subtração, divisão e multiplicação entre os números 10 e 100;

#include <stdio.h>
int main () {
printf ("Mostrar na tela a soma, subtração, divisão e multiplicação entre os números 10 e 100\n");
int num_1 = 10;
int num_2 = 100;

int soma = num_1 + num_2;
printf ("A soma é igual %d\n", soma);

int div = num_2/num_1;
printf("A divisão é igual %d\n", div);

int multi = num_1*num_2;
printf("A multiplicação é igual %d\n",multi);

int subtr = num_2-num_1;
printf("A subtração é %d\n",subtr);

return 0;
}