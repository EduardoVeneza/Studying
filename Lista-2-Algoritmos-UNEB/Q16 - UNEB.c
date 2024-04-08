/*Faça um algoritmo que leia 3 notas de um aluno e escreva sua média
harmônica. Se o aluno obteve média abaixo de 6.0, E SOMENTE NESSE
CASO, leia uma quarta nota (da prova de recuperação) e substitua a menor
das três notas pela nota da recuperação e recalcule a média harmônica.
Escreva a média harmônica final e o conceito obtido (0, se média harmônica
(MH) < 6.0; 1 se 6.0 <= MH <7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH < 9.0; 4
se MH>=9.0).*/

// PERGUNTAR AS NOTAS
// REALIZAR OS CÁLCULOS DAS 3 NOTAS EM MÉDIA HARMONICA 

// 3/(1/P1+1/P2+1/P3);

// TRAZER UM IF(SE A MEDIA HARMONICA FOR MENOR QUE 6)
	// PEDIR UMA PROVA DE RECUPERAÇÃO
	// REFAZER O CÁLCULO COM A NOVA VARIÁVEL PR(PROVA DE RECUPERAÇÃO
		// 4/(1/P1+1/P2+1/P3+1/P3);
		
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float p1, p2, p3, mh;
	int i;

do{		//loop
	
	printf("Digite a nota da primeira prova:\n");
	scanf("%f", &p1);
	fflush(stdin);
	
	printf("Digite a nota da segunda prova:\n");			//RECOLHER INFORMAÇÕES
	scanf("%f", &p2);
	fflush(stdin);
	
	printf("Digite a nota da terceira prova:\n");
	scanf("%f", &p3);
	fflush(stdin);
	
	mh = 3/(1/p1+1/p2+1/p3);
	
	if(mh < 6){
		float pr;
		printf("Média harmônica do aluno abaixo de 6: %f! Ela é insatisfatória, por favor digite o nota da prova de recuperação\n", mh);
		scanf("%f", &pr);
		fflush(stdin);		//média caso ele não passe
		
		mh = 4/(1/p1+1/p2+1/p3+1/pr);
		
		printf("A nova média harmônica do aluno é: %f\n", mh);
	}
	else{
		// média caso ele passe
		printf("A média harmônica do aluno é: %f\n", mh);
	}
	
	printf("Deseja realizar mais um cálculo de média harmônica?\nSe sim digite - 1\nSe não digite - 2\n");
	scanf("%d", &i);		//escolha do usuario de quebrar ou não o loop
	fflush(stdin);
	
} while(i == 1); //loop
}
