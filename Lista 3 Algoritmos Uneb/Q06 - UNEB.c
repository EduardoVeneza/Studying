// Fazer um algoritmo que encontre o maior valor dentro de um vetor de 20 posições de inteiros

#include <stdio.h>
#include <string.h>     // bibliotecas usadas
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int j, vet[20], i; // declaração de variáveis 
    int maior;
    do
    {

        for (i = 0; i < 20; i++)
        {
            printf("Insira o %d° valor!\n", i + 1);         // coleta de dados
            scanf("%d", &vet[i]);
            fflush(stdin);
        }

        maior = vet[0];
        for(i = 1; i < 20; i++)     // encontra o maior e armazena na variável maior
        {
            if(vet[i] > maior){
                maior = vet[i];
            }
        }


        printf("O maior valor é %d", maior);
        
        printf("\n\nDeseja rodar novamente o código\nDigite 1 para sim\nDigite 2 para não\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);

}
