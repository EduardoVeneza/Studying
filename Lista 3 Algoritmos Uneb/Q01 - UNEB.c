/*Escrever um algoritmo que l� um vetor V[10] e o escreve. Conte, a seguir, 
quantos valores de V s�o negativos e escreva esta informa��o.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int vet[10], i, contador, j;

    do{
    for(i=0; i<10; i++)
    {
        printf("\nEscreva o valor da %d� posi��o\n", i + 1);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

    contador = 0;
    for (i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            contador++;
        }
    }
    
    printf("\n\nNo seu vetor, est�o presentes %d valores negativos!\n", contador);
    printf("\nDeseja usar o c�digo novamente?\nSe sim digite 1\nSe n�o digite 2\n\n");
    scanf("%d", &j);
    } while (j == 1);
    
}