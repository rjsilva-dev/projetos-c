#include<stdio.h>
#include<string.h>

int main (){
printf(".::PAINEL DE ACESSO::.\n");
printf(".::IMC 2.0::.\n\n");

//variaveis declaradas senha e email
char senhacorreta[] = "1234";
char emailcorreto[] = "rjsilva.dev@gmail.com";
char senhausuario[4];
char emailusuario[21];

// digitar email e senha
printf("DIGITE SEU EMAIL:\n");
scanf("%s", emailusuario);

printf("DIGITE SUA SENHA:\n");
scanf("%s",senhausuario);

//condicao para saber se o email e senha estao corretos
if (strcmp(emailusuario,emailcorreto) == 0 && strcmp(senhausuario, senhacorreta) == 0) {
printf("ACESSO PERMITIDO\n");

// chama outro codigo
float peso, altura, imc;

printf("VAMOS CALCULAR SEU IMC\n");

printf("Escreva seu peso:\n");
scanf("%f", &peso);

printf("Escreva sua altura:\n");
scanf("%f", &altura);

imc = altura / (peso * peso);
    printf("%f", imc);

// caso erre a senha mensagem acesso negado	
}else{
	printf("ACESSO NEGADO\n");
	printf("E-MAIL OU SENHA ERRADO, TENTA DENOVO ANIMAL!");
}

return 0;
}

