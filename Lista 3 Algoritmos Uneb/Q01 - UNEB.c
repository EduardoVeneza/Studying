/*Escrever um algoritmo que lê um vetor V[10] e o escreve. Conte, a seguir, 
quantos valores de V são negativos e escreva esta informação.*/

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
        printf("\nEscreva o valor da %d° posição\n", i + 1);
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
    
    printf("\n\nNo seu vetor, estão presentes %d valores negativos!\n", contador);
    printf("\nDeseja usar o código novamente?\nSe sim digite 1\nSe não digite 2\n\n");
    scanf("%d", &j);
    } while (j == 1);
    
}