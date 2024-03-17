//Crie um programa onde deve ser informado a altura de uma criança. 
//Considerando que essa mesma criança cresça aproximadamente 10cm por ano, 
//use um laço de repetição for, para escrever na tela qual será a altura da 
//criança nos próximos anos, durante 4 anos.

int main (){

//definir variavel
float altura;
int anos=4;
int crescimento=10;

//console
printf("digite a altura da criança em metros abaixo:");

//digitar console
scanf("&f", &altura);

//formula
for (int x=altura; x<=anos; x= x+10){

    //printar na tela resultado
    printf("%f\n", x);
}


}







