#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int num, j, numDeze, numMil;
	do{
	printf("Digite o número que deseja comprovar a propriedade em exemplo: 3025 -> 30 + 25 = 55 -> 55² = 3025\n");
	scanf("%d", &num);
	fflush(stdin);

	numDeze = num%100;
	numMil = num / 100;

	if (sqrt(num) == numDeze + numMil)
	{
		printf("PROPRIEDADE CONFIRMADA! %d + %d = %d² = %d <- número inserido!\n", numMil, numDeze, numMil+numDeze, num);
	} else{
		printf("PROPRIEDADE NÃO ESTÁ PRESENTE! %d + %d = %d² = %d <- Este não é o número inserido!\n", numMil, numDeze, numDeze+numMil, (numDeze+numMil)*(numDeze+numMil));
	}
	

	printf("Deseja checar mais algum número? Se sim digite 1, senão digite qualquer outro número:\n");
	scanf("%d", &j);
	fflush(stdin);
	} while(j == 1);
}
