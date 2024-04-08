/*DESENVOLVER UM ALGORITMO QUE LEIA 20 NÚMEROS E DIGA QUANTOS SÃO MAIORES QUE 8*/


#include <stdio.h>
#include <locale.h>
#include <math.h>


int numeros[20];
int i;
int contador = 0;
int main(){
	setlocale(LC_ALL, "");

	for(i=0; i<20; i++){
		printf("Insira o %d número.\n", i+1);
		scanf("%d", &numeros[i]);
		fflush(stdin);
	}

	for(i=0; i<20; i++){
		if(numeros[i] > 0 && numeros[i] < 100){
			contador++;
		}
	}
	
	printf("Dentre esses 20 números, %d estão entre 0 e 100.", contador);
	
}
