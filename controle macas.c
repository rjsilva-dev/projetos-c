// as maças custam R$ 0.30 cada se forem compradas menos que uma duzia,
// e R$ 0.25 se foirem comprada pelo menos 12 escreva um progama que leia o numero 
// de macas e compradas e calcule e escrecva valor toalta

int main (){
//definir variavel int = numero inteiro, float = numeros quebrados 
int qtd_macas;
float valor_total;

//mostrar na tela texto
printf("quantidade de macas:\n");
scanf("%d", &qtd_macas);

//condicao if e else
//caso sim = if
if (qtd_macas < 12){
    valor_total = qtd_macas * 0.30;

}
// caso nao = else
else
{
    valor_total = qtd_macas * 0.25;
}
// sempre colocar resultado apos "}"
printf("o valor total: %.2f", valor_total);

  return 0;
}