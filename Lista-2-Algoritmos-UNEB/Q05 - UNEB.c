/*Fa�a um algoritmo que leia 3 valores v1, v2 e v3, e escreva-os em ordem
crescente.*/


#include <stdio.h>

int main(){
	int v1, v2, v3;
	printf("Digite o valor 1: ");
	scanf("%d", &v1);
	printf("Digite o valor 2: ");
	scanf("%d", &v2);
	printf("Digite o valor 3: ");
	scanf("%d", &v3);
	if(v1 < v2 && v2 < v3){
		printf("%d %d %d", v1, v2, v3);
	} else if(v2 < v1 && v1 < v3){
		printf("%d %d %d", v2, v1, v3);
	} else if(v2 < v3 && v3 < v1){
		printf("%d %d %d", v2, v3, v1);
	} else if(v1 < v3 && v3 < v2){
		printf("%d %d %d", v1, v3, v2);
	} else if(v3 < v1 && v1 < v2){
		printf("%d %d %d", v3, v1, v2);
	} else if(v3 < v2 && v2 < v1){
		printf("%d %d %d", v3, v2, v1);
	}
}
