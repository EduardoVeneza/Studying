/*Escrever um algoritmo que lê um vetor N[10] e o escreve. Troque, a seguir, 
cada elemento que estiverem posição ímpar (o primeiro, o terceiro...) pelo 
elemento da posição imediatamente a seguir. Escreva o vetor modificado.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>     //Bibliotecas utilizadas
#include <math.h>

int main (){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int N[10], i, j, aux;    //Variáveis necessárias

    do
    {
        for (i = 0; i < 10; i++)
    {
        printf("Escreva o valor do %dº valor do vetor!\n", i + 1);
        scanf("%d", &N[i]);     // Coleta de dados
        fflush(stdin);
    }

    printf("\nVetor inserido: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", N[i]); // Retorna o vetor inserido ao usuário
    }

    for (i = 0; i < 10; i++)
    {
        if(i%2 != 0){
            aux = N[i];
            N[i] = N[i+1];  //Troca valores em posições impares pelos seus sucessores!
            N[i+1] = aux; 
        }
    }


    printf("\nVetor Modificado: \n");
    for (i = 0; i < 10; i++)  //Retorna ao usuário o vetor modificado
    {
        printf("%d ", N[i]);
    }
    
    //Loop de código
    printf("\n\nDeseja rodar o código novamente?\n1 - SIM\n2 - NÃO\n");
    scanf("%d", &j);
    fflush(stdin);
    if(j == 1){
        continue;
    } else {
        break;
    }
    } while (1);
}
