#include<stdio.h>
int main (){
    //variaveis
    int numero, fatorial = 1;
    
    //printar na tela frase
    printf("digite um numero abaixo para saber seu fatorial\n");
    
    //digitar numero console
    scanf("%d", &numero);
    
    //formula fatorial
    for(int x= numero; x>=1; x=x-1){
        fatorial = fatorial*x;
    }
    
    //printar tela resultado
    printf("o valor fatorial de %d é: %d\n", numero, fatorial);
    return 0;
}