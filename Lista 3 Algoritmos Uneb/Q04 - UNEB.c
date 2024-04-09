/*Faça um vetor que leia 10 valores inteiros e retorne a posição de cada valor menor que 0*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int j, vet[10], i;

    do
    {

        for (i = 0; i < 10; i++)
        {
            printf("Insira o número de posição %d no vetor!\n", i);
            scanf("%d", &vet[i]);
            fflush(stdin);
        }

        printf("As posições do vetor que contém números negativos:\n");

        for(i = 0; i < 10; i++)
        {
            if(vet[i] < 0){
                printf("Posição: %d\n", i);
            }

        }    

        printf("Deseja rodar novamente o código\nDigite 1 para sim\nDigite 2 para não\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);

}
