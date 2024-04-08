/*Receber um nome; Receber um número N; Fazer o número se repetir N vezes.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N, i;
	char nome[10];
	
	
	printf("Digite seu nome:\n");
	gets(nome);
	
	printf("Digite o número de vezes que esse nome será exibido:\n");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		printf("%s\n", nome);
	}
	
	
	
}
