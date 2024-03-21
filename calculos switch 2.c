int main()
{

    int num1, num2, total;
    char menu;

    printf("escolha uma operacao\n");
    printf("'+', '-', '*', '/' \n");
    scanf("%c", &menu);

    printf("primeiro valor: ");
    scanf("%d", &num1);
    printf("segundo valor: ");
    scanf("%d", &num2);

    switch (menu)
    {
    case '+':
        total = num1 + num2;
        printf("resultado da soma: %d", total);
        break;
    case '-':
        total = num1 - num2;
        printf("resultado da subtracao: %d", total);
        break;
    case '*':
        total = num1 * num2;
        printf("resultado da multiplicacao: %d", total);
        break;
    case '/':
        total = num1 / num2;
        printf("resultado da divisao: %d", total);
        break;
    default:
        printf("opcao invalida");
    }
}