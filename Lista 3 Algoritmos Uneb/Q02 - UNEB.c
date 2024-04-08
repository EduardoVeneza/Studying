/*Faça um algoritmo que leia 10 valores e os escreva na ordem contrária à que 
foram digitados.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int vet[10], invet[10], j, i, inversor; //Variáveis necessárias

    do // Loop
    {
        
    for(i = 0; i < 10; i++){
        printf("\n Insira o valor do %d° valor!\n", i + 1);
        scanf("%d", &vet[i]);   //Coleta do vetor que irá ser invertido
        fflush(stdin);
    }
    inversor = 9; //Variável inversora! Deve ser incializada na última posição do vetor inserido
    for (i = 0; i < 10; i++)
    {
        invet[i] = vet[inversor]; // Vetor invertido = ultima posição do vetor inserido
        inversor = inversor - 1; // Decremento, faz com que o próximo valor do vetor invertido seja o penúltimo do vetor inserido, e assim sucessivamente
    }                            
    
    printf("Vetor inserido:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]); // Print do vetor inserido
    }
    
    printf("\n\nVetor invertido:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", invet[i]); //Print do vetor invertido
    }

    printf("\n\nDeseja usar o código novamente?\nSe sim digite 1\nSe não digite 2\n"); // Reutilização do código
    scanf("%d", &j);    
    fflush(stdin);
    } while (j == 1);
    
}