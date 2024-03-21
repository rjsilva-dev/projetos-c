#include<stdio.h>
int main() {
int n1,n2,n3,n4,media;


printf("primeira nota: ");
    scanf("%d", &n1);

    printf("segunda nota: ");
    scanf("%d", &n2);

    printf("terceira nota: ");
    scanf("%d", &n3);

    printf("quarta nota: ");
    scanf("%d", &n4);

media = (n1 + n2 + n3 + n4)/4;
printf("media do aluno e %.2d", media);

switch (media) {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            printf(" Aluno aprovado!\n");
            break;
        default:
            printf(" Aluno em recuperação.\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf(" Aluno reprovado.\n");
            break;
    }
}