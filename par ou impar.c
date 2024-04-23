#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // para verificar se o número é divisível por 2. 
    //Se o resto for 0, o número é par; caso contrário, é ímpar.
    
    if (numero % 2 == 0) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }

    return 0;
}