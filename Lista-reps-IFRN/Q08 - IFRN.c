/*lEIA A IDADE DE 20 PESSOAS E INDIQUE QUANTAS SÃO MAIORES DE IDADE*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	int contador = 0;
	int i;
	int idades[20];

	for(i=0; i<20; i++){
		printf("Insira a idade da %i pessoa:\n", i + 1);
		scanf("%d", &idades[i]);
		fflush(stdin);
			
	}
	
	i = 0;
	for(i=0; i<20; i++){
		if(idades[i] >= 18){
			contador++;
		}
	}
	
	printf("\n");
	printf("Existem %d pessoas maiores de idade dentre as informadas!", contador);
	
	
}
