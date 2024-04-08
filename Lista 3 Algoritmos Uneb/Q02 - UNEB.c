/*Fa�a um algoritmo que leia 10 valores e os escreva na ordem contr�ria � que 
foram digitados.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int vet[10], invet[10], j, i, inversor; //Vari�veis necess�rias

    do // Loop
    {
        
    for(i = 0; i < 10; i++){
        printf("\n Insira o valor do %d� valor!\n", i + 1);
        scanf("%d", &vet[i]);   //Coleta do vetor que ir� ser invertido
        fflush(stdin);
    }
    inversor = 9; //Vari�vel inversora! Deve ser incializada na �ltima posi��o do vetor inserido
    for (i = 0; i < 10; i++)
    {
        invet[i] = vet[inversor]; // Vetor invertido = ultima posi��o do vetor inserido
        inversor = inversor - 1; // Decremento, faz com que o pr�ximo valor do vetor invertido seja o pen�ltimo do vetor inserido, e assim sucessivamente
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

    printf("\n\nDeseja usar o c�digo novamente?\nSe sim digite 1\nSe n�o digite 2\n"); // Reutiliza��o do c�digo
    scanf("%d", &j);    
    fflush(stdin);
    } while (j == 1);
    
}