//Crie um programa para o RH de uma empresa, 
//para descontar 27,5% do salário de um funcionário.

int main (){

printf("o salario R$ 1412.00 tem um desconto de 27,5, o valor esta abaixo\n");
float salario = 1412.00;
float desconto = 27.5;

float resultado = salario * (desconto / 100);
printf("O desconto de %.2f%% em R$%.2f é: R$%.2f\n", desconto, salario, resultado);

    return 0;
}