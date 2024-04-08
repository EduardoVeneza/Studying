/*Calculadora de estacionamento, seguindo as regras da quest�o 19*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int He, Hs, tp, j, preco;
	do{
		printf("Ol�! Por favor digite o hor�rio de entrada do motorista!\nPs: No formato 00h at� 23h\n");
	scanf("%d", &He);
	fflush(stdin);

	printf("Ok! Agora digite o hor�rio de sa�da do motorista!\nPs: No formato 00h at� 23h\n");
	scanf("%d", &Hs);
	fflush(stdin);

	tp = Hs - He;

	if((Hs < 0 || Hs > 23) || (He < 0 || He > 23)){
		printf("Hor�rios errados foram digitados! Por favor se certifique de digitar no formato: 00h - 23h!\n");
	} else if(tp <= 2){
		preco = tp * 5;
		printf("O motorista permaneceu %d h no estacionamento, portanto pagar�: R$ %d \n", tp, preco);
	} else if(tp > 2 && tp <= 4){
		preco = 10 + ((tp - 2) * 4);
		printf("O motorista permaneceu %d h no estacionamento, portanto pagar�: R$ %d \n", tp, preco);
	} else if(tp > 4){
		preco = 10 + 8 + (tp - 4);
		printf("O motorista permaneceu %d h no estacionamento, portanto pagar�: R$ %d \n", tp, preco);
	}

	printf("Deseja calular mais algum pre�o? Se sim digite 1, sen�o digite qualquer outro n�mero:\n");
	scanf("%d", &j);
	fflush(stdin);
	} while(j == 1);
}
