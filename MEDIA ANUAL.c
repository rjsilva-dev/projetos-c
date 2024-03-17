//Crie um programa para calcular a 
//media anual de um aluno que obteve as 
//notas 5.5, 7.0, 7.0, 9.5;

#include <stdio.h>
int main (){
printf ("As notas anual do aluno são:\n");
float nota_1 = 5.5;
float nota_2 = 7.0;
float nota_3 = 7.0;
float nota_4 = 9.5;

float media = (nota_1+nota_2+nota_3+nota_4)/4;
printf("Nota anual é igual %.1f\n", media);

    return 0;
}
