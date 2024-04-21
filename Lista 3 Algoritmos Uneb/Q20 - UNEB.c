/* Faça um algoritmo que leia dois vetores V[10] e W[10], ordenando cada um em 
ordem crescente. Gere, a seguir, um vetor Z[20] com os elementos de V e W, 
também em ordem crescente. Escreva o vetor Z.*/

#include <stdio.h>
#include <math.h>
#include <string.h> //Bibliotecas necessárias
#include <locale.h>
#include <stdlib.h>

int main () {
//Linguagem set
setlocale(LC_ALL, "Portuguese_Brazil");

//Declaração de variáveis
int V[10], W[10], Z[20], aux, j, i;

//Entrada de dados
for (i = 0; i < 10; i++)
{
    printf("\nDigite o %dº valor V!\n", i+1);
    scanf("%d", &V[i]);      
    fflush(stdin);
}
//Entrada de dados
i = 0;
for (i = 0; i < 10; i++)
{
    printf("\nDigite o %dº valor W!\n", i+1);
    scanf("%d", &W[i]);      
    fflush(stdin);
}

// COLOCANDO OS DOIS VALORES NO VETOR Z COM DOIS LOOPS
i = 0;
for (i = 0; i < 10; i++)
{
    Z[i] = V[i];
    Z[i+10] = W[i];
}

//Colocando o vetor Z em ordem crescente:
for (j = 0; j < 20; j++)
{
    for (i = 0; i < 20; i++)
    {
        if(Z[i] > Z[i+1])
        {
            aux = Z[i];
            Z[i] = Z[i+1];
            Z[i+1] = aux;
        }
    }
}

//Saída de dados
printf("\nVetor V inserido:\n");
for (i = 0; i < 10; i++)
{
    printf("%d ", V[i]);
}
//Saída de dados
printf("\nznVetor W inserido:\n");
for (i = 0; i < 10; i++)
{
    printf("%d ", W[i]);
}
//Saída de dados
printf("\n\nVetor Z, junção dos elementos de V com W em ordem crescente: \n");
for (i = 0; i < 20; i++)
{
    printf("%d ", Z[i]);
}

}
