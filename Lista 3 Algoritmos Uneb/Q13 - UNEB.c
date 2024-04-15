/*Escrever um algoritmo que lê um vetor X[10] e, após, leia um vetor  Y[10]. Crie, 
a seguir, um terceiro vetor Z com os elementos que aparecem nos dois vetores 
(intersecção). Os elementos devem aparecer no vetor Z na mesma ordem em
que aparecem no vetor X. Considere que não há repetição de valores dentro 
do mesmo vetor. Escreva o vetor Z (apenas as posições que foram 
preenchidas).*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int x[10], y[10], z[10], j, i, k, org, cont;
    org = 0;
    cont = 0;
    do
    {
    // -------------------------------------------------------------------------------------------- // 

    for (i = 0; i < 10; i++)        
    {
        printf("Escreva o %dº elemento do vetor X\n", i + 1);
        scanf("%d", &x[i]);
        fflush(stdin);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Escreva o %dº elemento do vetor Y\n", i + 1);
        scanf("%d", &y[i]);
        fflush(stdin);
    }

    for (i = 0; i < 10; i++)
    {
        for (k = 0; k < 10; k++)
        {
            if(x[i] == y[k]){
                z[org] = x[i];
                org++;
                cont++;
            } else {
                z[org] = 0;
            }
        }
        
    }

    // -------------------------------------------------------------------------------------------- //

    printf("\nVetor X:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
    
    printf("\n\nVetor Y:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", y[i]);
    }

    printf("\n\nVetor Z (Intersecção):\n");
    for (i = 0; i < cont; i++)
    {
        printf("%d ", z[i]);
    }


        printf("\n\nnDeseja rodar o código novamente?\n1 - SIM\n2 - NÃO\n");
        scanf("%d", &j);
        fflush(stdin);
        if(j == 1){
            continue;
        } else {
            break;
        } 
    } while (1);
}
