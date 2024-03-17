//Crie um programa que calcule quantas horas e minutos possuem em 3722 minutos

int main (){

printf("QUANTAS HORAS E MINUTOS POSSUEM 3722 MINUTOS\n");
 
 int min = 3722;
 int sobra = min/60;
 int horas = min %60;

 printf("o resultado é %d horas, e %d minutos\n", sobra, horas);


    return 0;
}