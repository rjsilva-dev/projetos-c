#include<stdio.h>
int main (){

printf("Calcular IMC\n");

float altura;
float peso;

printf("Digite sua altura:\n");
scanf("%f",&altura);

printf("Digite seu peso:\n");
scanf("%f",&peso);

float imc =  peso/(altura*altura); 
printf("Seu IMC é :%.2f\n",imc);


    return 0;
}