/*Faça um algoritmo que leia um vetor de 10 elementos. Leia, a seguir, um valor 
N e verifique se o valor aparece no vetor escrevendo: 0 - se o valor N não 
aparece no vetor; 1 - se o valor N aparece no vetor.*/

#include <stdio.h>
#include <math.h>           // Bibliotecas utilizadas
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");  //Set de linguagem

    int i, j, comp, verif; // Variáveis utilizadas
    verif = 0;
    do
    {   
        int vet[10];

        for (i = 0;  i < 10; i++){
        printf("Digite o %dº elemento do vetor!\n", i + 1);     //Coleta de dados
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

        printf("\n\nDigite o número que deseja conferir a existência no vetor!\n");  //Coleta de dados
        scanf("%d", &comp);
        fflush(stdin);

        for (i = 0; i < 10; i++)
        {
            if(comp == vet[i]){
                printf("\nSeu número (%d) foi encontrado na posição %d do vetor!\n", comp, i); //Verifica se o número existe no vetor

            } 
        }
        
        for (i = 0; i < 10; i++)
        {
            if(comp != vet[i]){     
                verif++;            //Verifica se o número não existe no vetor
            }
        }
        
        if(verif == 10){
            printf("\nO número (%d) não foi encontrado em nenhuna posição do vetor!\n", comp); //Retorna os valores
        }

        printf("\nDeseja rodar o código novamente?\nDigite 1 para SIM\nDigite 2 para NÃO\n");  //Loop de pergunta
        scanf("%d", &j);
        if(j == 1){
            continue;
        } else {
            break;
        }
    } while (1);
}
