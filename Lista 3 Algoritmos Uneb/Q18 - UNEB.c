/*Faça um algoritmo que leia um vetor X[10] e ordene seus elementos em ordem 
crescente. Escreva o vetor ordenado.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int X[10], i, aux, j, k;

    do
    {
        
        for (i = 0; i < 10; i++){
        printf("Digite o valor do %dº valor do vetor X\n", i + 1);
        scanf("%d", &X[i]);
        fflush(stdin);
    }
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if(X[i] > X[i+1]){
            aux = X[i];
            X[i] = X[i+1];
            X[i+1] = aux;
            aux = 0;
            }
        }
    }
    
    printf("\nVetor organizado: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", X[i]);
    }

    printf("\n\nDeseja organizar novamente?\n1 - SIM\n2 -NÃO");
    scanf("%d", &k);
    fflush(stdin);

    if (k == 1)
    {
        continue;
    } else {
        break;
    }   
    } while (1);   
}
