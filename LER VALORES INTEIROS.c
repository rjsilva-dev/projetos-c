#include <stdio.h>

int main()
{
    int n1,n2;
 
 for(; n1==n2; ){
    
    printf("Progama para ler valores inteiro\n");
    printf("digite um valor:\n");
    scanf("%d", &n1);
    
    printf("Digite o segundo valor\n");
    scanf("%d", &n2);
    if (n1==n2){
        printf("Os valores são iguais, digite valores diferente\n");
    }
}
if (n1>n2){
    printf("%d maior que %d", n1,n2);
    
}else if(n2 >n1){
    printf("%d maior que %d", n2,n1);
    
}else {
    printf("Os numeros sao iguais");
}

    return 0;
}
