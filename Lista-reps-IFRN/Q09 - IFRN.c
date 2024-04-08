/*lEIA A IDADE DE 20 PESSOAS E INDIQUE A MENOR IDADE DENTRE AS DEZ*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	
	int menor;
	int i;
	int idades[10];

	for(i=0; i<10; i++){
		printf("Insira a idade da %i pessoa:\n", i + 1);
		scanf("%d", &idades[i]);
		fflush(stdin);
		
		menor += idades[i];	
	}
	
	i = 0;
	for(i=0; i<10; i++){
		
		
		if(menor > idades[i]){
			menor = idades[i];
		}
	}
	
	printf("\n");
	printf("menor idade: %d.", menor);
	
	
}
