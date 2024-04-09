/* Fazer um algoritmo que leia um vetor de inteiros de 10 posições e depois, converta os números negativos em módulo */

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

        printf("O vetor em módulo:\n");

        for(i = 0; i < 10; i++)
        {
            if(vet[i] < 0){
                vet[i] = vet[i] * (-1);
            }
            printf("%d ", vet[i]);
        }    

        printf("\n\nDeseja rodar novamente o código\nDigite 1 para sim\nDigite 2 para não\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);

}
