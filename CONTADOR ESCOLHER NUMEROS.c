//Crie um programa que comece a contar a partir do número que o 
//usuário informar, e peça ao usuário para definir um limite.
//Esse número precisa ir aumentando de 3 em 3, até ser menor ou igual ao limite.

#include <stdio.h>

int main() {
    int inicial, limite;

    //numero inicial
    printf("Informe um numero inicial: ");
    scanf("%d", &inicial);

    // numero limite
    printf("Informe o limite: ");
    scanf("%d", &limite);

    // formula
     for (int x= inicial; x <=limite; x += 3) {
        printf("%d\n", x);
    }

}