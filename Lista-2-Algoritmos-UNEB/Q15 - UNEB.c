/* Faça um algoritmo que leia 3 notas de um aluno e escreva sua média
harmônica. Dica: A média harmônica entre três valores N1, N2 e N3 é
calculada pela expressão 3/(1/N1+1/N2+1/N3). O que acontece se alguma das
notas for igual a 0? Que resultado o algoritmo deve emitir? */

// 1 - PEDIR AS NOTAS
// 2 - FAZER O CÁLCULO
// 3 - VOLTAR PARA O USUÁRIO A MÉDIA HARMÔNICA
// 4 - ** CASO ELE TENHA ZERADO UMA PROVA, ELA DEVE SER DESCONSIDERADA, POIS NÃO EXISTE DIVISÃO POR 0 **
// 5 - LOOP SIMPLES PRA TORNAR O CÓDIGO RECICLÁVEL

		//CALCULADORA MÉDIA HARMÔNICA

#include <stdio.h>            //bibliotecas
#include <locale.h>
#include <math.h>
 
 
float N1, N2, N3, MH;
int i;
int main (){
	setlocale(LC_ALL, "");
	
	do { //loop
		printf("Digite a primeira nota: \n");
		scanf("%f", &N1);
		fflush(stdin);
		printf("Digite a segunda nota: \n");			//COLETA DE DADOS
		scanf("%f", &N2);
		fflush(stdin);
		printf("Digite a terceira nota: \n");
		scanf("%f", &N3);
		fflush(stdin);
		
		// lógica da média e todas as possibilidades.
		 
		 
		 if ((N1 == 0 && N2 == 0) || (N1 == 0 && N3 == 0) || (N2 == 0 && N3 == 0)){
			printf("O aluno zerou duas provas, não há média alguma!");
			
			
		} else if(N1 == 0){
			printf("O aluno zerou a primeira prova, portanto o 0 será desconsiderado!\n");
			MH = 3/(1/N2 + 1/N3);														
			printf("A média harmônica do aluno é: %f\n", MH);
			
			
		}else if(N2 == 0){			
			printf("O aluno zerou a segunda prova, portanto o 0 será desconsiderado!\n");
			MH = 3/(1/N1+1/N3);
			printf("A média harmônica do aluno é: %f\n", MH);
			
			
		}else if(N3 == 0){
			printf("O aluno zerou a terceira prova, portanto o 0 será desconsiderado!\n");
			MH = 3/(1/N1+1/N2);
			printf("A média harmônica do aluno é: %f\n", MH);
			
			
		}  else{
			MH = 3/(1/N1+1/N2+1/N3);
			printf("A média harmônica do aluno é: %f\n", MH);
		}
		
		printf("Deseja realizar mais um cálculo?\nDigite 1 para SIM e 2 para não\n");
		scanf("%d", &i);
		fflush(stdin);
	}	while(i == 1);

}
