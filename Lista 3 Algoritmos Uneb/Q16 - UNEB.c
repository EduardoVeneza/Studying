/*Escrever um algoritmo que lê 2 vetores X[10] e Y[10], e escreva os elementos 
que aparecem no vetor X e não aparecem no vetor Y (diferença de conjuntos). 
Escreva os valores na ordem em que eles aparecem no vetor X. Os dois 
vetores devem ser lidos separadamente (em primeiro lugar, todo o vetor X, 
após, o vetor Y)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>     //Bibliotecas necessárias
#include <locale.h>
#include <math.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Set de linguagem

    int X[10], Y[10], j, i, cont, a = 0;
    int dif[10];
    cont = 0;
    do
    {
        for (i = 0; i < 10; i++)
        {
            printf("Digite o %dº do vetor X\n", i + 1);
            scanf("%d", &X[i]); //entrada de dados
            fflush(stdin);
        }
        
        for (i = 0; i < 10; i++)
        {
            printf("Digite o %dº do vetor Y\n", i + 1);
            scanf("%d", &Y[i]); //entrada de dados
            fflush(stdin);
        }

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%d ", X[i]);
                printf("%d\n ", Y[j]);

                if (X[i] != Y[j])
                {
                    cont++;                      /*LOOP*/
                }                                /*Compara 1 valor de X com TODOS de Y, e se não houver nenhum */
                                                 /*ele coloca em um vetor de diferentes, se não ele ignora*/
                if (cont == 10){
                    dif[a] = X[i];
                    cont = 0;
                    a++;
                }
                
            }
            cont = 0;
        }

        printf("\nVetor inserido X: \n");
        for (i = 0; i < 10; i++)     //Saída de dados
        {
            printf("%d ", X[i]);
        }
        
        printf("\nVetor inserido Y: \n");
        for (i = 0; i < 10; i++)    //Saída de dados 
        {
            printf("%d ", Y[i]);
        }

        printf("\nElementos que existem em X que não existem em Y: \n");
        for (i = 0; i < a; i++)     //Saída de dados
        {
            printf("%d ", dif[i]);
        }


        printf("\nRodar novamente?\n1 - sim\n2 - não\n");
        scanf("%d", &j); //LOOP para usar o código novamente
        fflush(stdin);
        if (j == 1)
        {
            continue;
        } else {
            break;
        }
    } while (1);
    


}
