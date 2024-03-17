#include<stdio.h>
int main (){

printf("Calcular Notas Aluno:\n");

float n1,n2,n3,n4;

printf("Digite a 1 nota:\n");
scanf("%f",&n1);

printf("Digite a 2 nota:\n");
scanf("%f",&n2);

printf("Digite a 3 nota:\n");
scanf("%f",&n3);

printf("Digite a 4 nota:\n");
scanf("%f",&n4);

float media= (n1+n2+n3+n4)/4;

printf("A media anual foi: %.1f\n", media);


    return 0;
}