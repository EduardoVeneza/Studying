/* Faça um algoritmo que leia um vetor V[5], com os valores sorteados em um 
sorteio de Loto. Leia, a seguir, para um conjunto de 5 apostadores, seus 5 
palpites e escreva, para cada um, o número de acertos que teve.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");


    int mega[6], i, cont, sort[6], k, z;
    cont = 0;

    for (i = 0; i < 6; i++)
    {   
        mega[i] = rand() % 61;    //Sorteia 6 números entre 1 e 60 e garante que TODOS serão diferentes
    }
    
    for (z = 0; z < 6; z++)
    {
        for (k = 1; k < 6; k++)
        {
            if (mega[z] == mega[k]) //Garante que todos são diferentes
            {
                
            }
        }
    }

    for (i = 0; i < 6; i++)
    {
        printf("Escreva seu %dº palpite!\n", i + 1);
        scanf("%d", &sort[i]);
    }
    
    for (i = 0; i < 6; i++)
    {
        for (k = 0; k < 6; k++)
        {
            if (sort[i] == mega[k])
            {
                cont++;
            }
            
        }
        
    }


    // HARD CODE (ESTAVA COM PREGUIÇA)
    if(cont == 0)
    {
        printf("Uma pena! Você não fez nenhum ponto!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 1){
        printf("Você teve 1 acerto!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 2){
        printf("Você teve 2 acertos! Uma dupla!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 3){
        printf("Você teve 3 acertos! Um trio!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 4){
        printf("Você teve 4 acertos! Uma quadra!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 5){
        printf("Você teve 5 acertos! Uma quina\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    } else if(cont == 6){
        printf("Você está milionário! Acertou todos!\n\n");
        printf("Seu palpite: %d %d %d %d %d %d\n", sort[0], sort[1], sort[2], sort[3], sort[4], sort[5]);
        printf("Números sorteados: %d %d %d %d %d %d\n", mega[0], mega[1], mega[2], mega[3], mega[4], mega[5]);
    }
    
}
