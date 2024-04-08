/*lEIA A IDADE DE 20 PESSOAS E SOME SUAS IDADES*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	int i, soma;
	int idades[20];
	soma = 0;
	for(i=0; i<20; i++){
		printf("Insira a idade da %i pessoa:\n", i + 1);
		scanf("%d", &idades[i]);
		fflush(stdin);
		
		soma = soma + idades[i];
	}
	printf("\n");
	printf("A soma das idades é: %d", soma);
	
	
}
