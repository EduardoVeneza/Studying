/*lEIA A IDADE DE 20 PESSOAS E FAÇA A MÉDIA DAS IDADES*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	
	float soma;
	int i;
	int idades[20];
	soma = 0;
	for(i=0; i<20; i++){
		printf("Insira a idade da %i pessoa:\n", i + 1);
		scanf("%d", &idades[i]);
		fflush(stdin);
		
		soma = soma + idades[i];
	}
	printf("\n");
	printf("A média das idades é: %.3f", soma/20);
	
	
}
