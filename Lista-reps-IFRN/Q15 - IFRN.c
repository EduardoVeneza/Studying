/*DESENVOLVER UM ALGORITMO QUE LEIA UMA SEQUENCIA DE NÚMEROS E RETORNE A SOMA DELES, QUANDO UM NÚMERO NEGATIVO FOR DIGITADO, PARAR A EXECUÇÃO*/


#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL, "");
    int numero, soma = 0;

    printf("Digite uma sequência de números (digitar um número abaixo de 0 irá encerrar a execução):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verifica se o número é negativo para encerrar o loop
        if (numero < 0) {
            break;
        }

        // Adiciona o número à soma
        soma += numero;
        printf("Soma atual está em: %d\n", soma);
    }

    return 0;
}
