/*ALGORITMO QUE DIZ A TABUADA DE QUALQUER NÃšMERO ATÃ‰ O PONTO DESEJADO*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	int num, tam, i, j;
	
	do{
	
	printf("Digite um número para saber sua tabuada!\n");
	scanf("%d", &num);
	fflush(stdin);				//Adquire informaÃ§Ãµes
	printf("Digite até que número sua tabuada irá!\n");
	scanf("%d", &tam);
	fflush(stdin);
	
	for(i=0; i<=tam; i++){
		printf("%d x %d = %d\n", num, i, num * i);
	
	}
	
	printf("Deseja fazer outra tabuada?\nSe sim digite 1\nSe nâo digite 2\n");
	scanf("%d", &j);
	fflush(stdin);
	} while(j == 1);
	
}
