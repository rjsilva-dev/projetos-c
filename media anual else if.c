#include<stdio.h>
int main(){
    //variaveis tipo floar, numeros quebrados
float n1, n2, n3, n4, media;

// dgitar notas
printf("1 nota: ");
scanf("%f", &n1);

printf("2 nota: ");
scanf("%f", &n2);

printf("3 nota: ");
scanf("%f", &n3);

printf("4 nota: ");
scanf("%f", &n4);

//formula media
media = (n1+n2+n3+n4)/4;

//saida de dados na tela
printf("sua media foi: %.1f", media);

//caso se caso nao 
if (media >= 6){
    printf(" aluno aprovado");
}else
printf(" aluno reprovado");

}