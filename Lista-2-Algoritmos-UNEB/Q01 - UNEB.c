/*Fa�a um algoritmo que leia um valor e escreva: 0, se o valor � zero; 1, se o
valor � maior que zero; -1 - se o valor � negativo.*/


#include <stdio.h>

int main(){
	int valor;
	printf("Digite um valor: ");
	scanf("%d", &valor);
	if(valor == 0){
		printf("0");
	} else if(valor > 0){
		printf("1");
	} else {
		printf("-1");
	}
}
