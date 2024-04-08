/* Leia o nome do usuário e escreva o nome dele na tela 10 vezes. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	char nome[2];
	printf("Digite seu nome: ");
	gets(nome);
	
	
	for (i=0; i<10; i++){
		puts(nome);
	}
}
