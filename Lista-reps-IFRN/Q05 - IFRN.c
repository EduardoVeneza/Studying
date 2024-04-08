#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	int numeros[10];
	int bla = 0;
	
	
	for(i = 0; i < 10; i++){
		printf("Número %d\n", i + 1);	
		scanf("%d", &numeros[i]);
	}
	
	for(i = 0; i < 10; i++){
		bla += numeros[i];
		
	}
	printf("%d", bla);
	
}
