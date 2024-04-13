/*Escrever um algoritmo que lê um vetor N[10] e o escreve. Troque, a seguir, o 
1° elemento com o último, o 2° com o penúltimo etc. até o 5° com o 6° e 
escreva o vetor N assim modificado. */

#include <stdio.h>
#include <math.h>
#include <string.h>     //Bibliotecas utilizadas
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); //Set de língua

    int N[10];
    int i, j, inversor;
    do
    {

    for (i = 0; i < 10; i++){
        printf("Digite o %dº número!\n",i + 1);
        scanf("%d", &N[i]);     //Coleta de informações
        fflush(stdin);
    }

    printf("Vetor inserido: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", N[i]); //Retorno ao usuário
    }


    printf("\n\nVetor ao contrário: \n");
    inversor = 9;
    int newN[10];
    
    for (i = 0; i < 10; i++)
    {
        newN[i] = N[inversor];      // Gera um vetor ao contrário
        inversor = inversor - 1;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", newN[i]);     //Retorna um vetor invertido para o usuário
    }

    printf("\n\nVetor Modificado: \n");

    inversor = 9;
    for (i = 0; i < 10; i++)
    {
        N[i] = N[inversor];     //Gera um vetor modificado
        inversor = inversor - 1;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", N[i]);        //Retorna esse vetor modificado ao usuário
    }
    
        printf("\n\n1 - RODAR NOVAMENTE\n2 - PARAR PROGRAMA\n");
        scanf("%d", &j);        //Pergunta sobre o desejo de utilizar o código novamente!
        fflush(stdin);
        if(j == 1){
            continue;
        } else {
            break;
        }
    } while (1);

}
