#include <stdio.h>
int main (){

// definir varial fixa
char frase[60];
int quantidade;

//printar tela frase
printf("Escreva abaixo uma frase que deseja,ser repetida\n");

//capturar o que e digitado
gets(frase);

//quantidade de x
printf("Digite abaixo a quantidade de X, que a frase sera repetida\n");
scanf("%d", &quantidade);

//formula
for(int x = 1; x <=quantidade; x = x + 1){

//printar na tela resultado
    printf("%s\n", frase);
}

}