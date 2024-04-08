/*DESENVOLVER UM ALGORITMO QUE LEIA 20 NÚMEROS E DIGA QUANTOS SÃO PARES*/


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
		if(numeros[i]%2 == 0){
			contador++;
		}
	}
	
	printf("Dentre esses 20 números, %d são pares.", contador);
	
}
