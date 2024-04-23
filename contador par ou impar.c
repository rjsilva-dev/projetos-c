#include <stdio.h>

int main(){
//variavel
int ns[7];

//for para saber numeros pares
for (int x =0; x <=7; x++){
	 if (x!=0){
	 	ns[x-1]=x*2;
	 }
}

// mostrar todos numeros na tela
for (int x=0; x<=6; x++){
    printf("\n%d", ns[x]);
}
 }

