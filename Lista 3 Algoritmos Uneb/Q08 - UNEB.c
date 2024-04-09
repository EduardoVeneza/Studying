// Fazer um algoritmo que faça a média de x provas dadas pelo usuário

#include <stdio.h>
#include <string.h>     // bibliotecas usadas
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int j, i; // declaração de variáveis 
    int tam;
    
    do
    {
        printf("Digite quantas notas você irá usar na média\n");
        scanf("%d", &tam);

        float notas[tam], soma;
        soma = 0;

        for (i = 0; i < tam; i++){
            printf("Digite a %d° nota\n", i+1);
            scanf("%f", &notas[i]);
            fflush(stdin);
        }
        
        for (i = 0; i < tam; i++){
            soma += notas[i];
        }
        printf("Sua média é: %.1f", soma/tam);
    
        printf("\n\nDeseja rodar novamente o código\nDigite 1 para sim\nDigite 2 para não\n");
        scanf("%d", &j);    //loop
        fflush(stdin);
    } while (j == 1);
}
