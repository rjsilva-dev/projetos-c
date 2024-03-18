#include<stdio.h>

int main (){

int idade;
char nome [60];

printf("Qual seu nome?\n");
gets(nome);

printf("Qual sua idade?\n");
scanf("%d", &idade);

//condição idade maior ou igual a 18 igual a menor que 64
if (idade >= 18 && idade <= 64){
    printf("%s, voce e maior de idade.\n",nome);
}

//condicao idade menor que 18
else if (idade <18){
    printf("%s, voce e menor de idade.\n ",nome);
}
// condicao final maior que 65 idoso
else 
{
    printf("%s, você e um idoso.\n", nome);
}
}