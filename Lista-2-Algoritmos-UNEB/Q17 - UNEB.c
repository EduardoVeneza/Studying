/*Obs, código apresenta erros ao inserir números iguais de votos para 2 ou mais candidatos!*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int j;
	do{
	
	
	float soma;
	int i, vet[5];		// variaveis
	float maior1, maior2;
	int maior1c, maior2c;
	
	printf("Digite o número de votos do canditado 1:\n");
	scanf("%d", &vet[0]);
	fflush(stdin);
	printf("Digite o número de votos do canditado 2:\n");
	scanf("%d", &vet[1]);
	fflush(stdin);
	printf("Digite o número de votos do canditado 3:\n");		// adquirir informações
	scanf("%d", &vet[2]);
	fflush(stdin);
	printf("Digite o número de votos do canditado 4:\n");
	scanf("%d", &vet[3]);
	fflush(stdin);
	printf("Digite o número de votos do canditado 5:\n");
	scanf("%d", &vet[4]);
	fflush(stdin);

	for(i = 0; i < 5; i++){
		soma += vet[i];
	}
	float vetp[5] = {(vet[0]/soma) * 100, (vet[1]/soma) * 100, (vet[2]/soma) * 100, (vet[3]/soma) * 100, (vet[4]/soma) * 100};
	
	
	// Verifica se existe um fim no primeiro turno
	if(vetp[0] > 50){
		printf("As eleições estão decididas! O candidato 1 ganhou com %.3f porcento dos votos\n", vetp[0]);
	} else if(vetp[1] > 50){
		printf("As eleições estão decididas! O candidato 2 ganhou com %.3f porcento dos votos\n", vetp[1]);
	} else if(vetp[2] > 50){
		printf("As eleições estão decididas! O candidato 3 ganhou com %.3f porcento dos votos\n", vetp[2]);
	} else if(vetp[3] > 50){
		printf("As eleições estão decididas! O candidato 4 ganhou com %.3f porcento dos votos\n", vetp[3]);
	} else if(vetp[4] > 50){
		printf("As eleições estão decididas! O candidato 5 ganhou com %.3f porcento dos votos\n", vetp[4]);
	}
	
	printf("Haverá um segundo turno!\n");
	printf("\n");

	// encontra os 2 maiores números de votos (porcentagens)
	//	encontra o maior número (porcentagens)
	maior1 = vetp[0];
	for(i = 0; i < 5; i++){
		if(vetp[i] >= maior1){
			maior1 = vetp[i];
		}
	}
	// pega o código do maior1
	if(maior1 == vetp[0]){
		maior1c = 01;
	} else if(maior1 == vetp[1]){
		maior1c = 02;
	} else if(maior1 == vetp[2]){
		maior1c = 03;
	} else if(maior1 == vetp[3]){
		maior1c = 04;
	} else if(maior1 == vetp[4]){
		maior1c = 05;
	}
	//retira maior1 do vetor
	for(i = 0; i < 5; i++){
		if(vetp[i] == maior1){
			vetp[i] = vetp[i] - vetp[i];
		}
	}
	// encontra o segundo maior (porcentagens)
	maior2 = vetp[0];
	for(i = 0; i < 5; i++){
		if(vetp[i] >= maior2){
			maior2 = vetp[i];
		}
	}
	
	//pega o código do maior2
	if(maior2 == vetp[0]){
		maior2c = 01;
	} else if(maior2 == vetp[1]){
		maior2c = 02;
	} else if(maior2 == vetp[2]){
		maior2c = 03;
	} else if(maior2 == vetp[3]){
		maior2c = 04;
	} else if(maior2 == vetp[4]){
		maior2c = 05;
	}
	
	// -------------------------------------------------------------- //
	
	printf("Os dois candidatos com maior porcentagem são: %d com %.3f porcento de votos e %d com %.3f porcento de votos!\n", maior1c, maior1, maior2c, maior2);
	
	
	
	printf("Quer fazer novamente? Digite 1 para sim, ou qualquer outro número para não!\n");
	scanf("%d", &j);
	fflush(stdin);
} while(j == 1);

}
