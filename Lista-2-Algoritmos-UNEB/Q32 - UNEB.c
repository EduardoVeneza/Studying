#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int j, horaChegada, horaSaida, horasBonus;
    float valorHora, pagamento;
    do
    {   
        //COLETA DE DADOS v --------------------------------------------------------------------------------
        printf("Ol�!, use esse programa para saber quanto seu trabalhador deve receber por turno! \n\n");
        printf("Neste programa voc� fornecer� quanto seu trabalhador ganha por hora!\nPS: lembrando que a partir das 20h ele ganhar� 20%% a mais\n\n");

        printf("Para come�ar! Digite quanto seu trabalhador ganhar� por hora trabalhada (em reais):\n");
        scanf("%f", &valorHora);
        fflush(stdin);

        printf("\nOk, seu trabalhador ganhar� R$%.2f por hora!\n\n", valorHora);
        printf("Que horas ele ir� chegar no trabalho?\n");
        scanf("%d", &horaChegada);
        fflush(stdin);

        printf("\n�timo, ele chegar� �s %d horas!\n\n", horaChegada);
        printf("Que horas ele ir� encerrar o expediente?\n");
        scanf("%d", &horaSaida);
        fflush(stdin);
        //COLETA DE DADOS ^ ----------------------------------------------------------------------------

        if (horaSaida > 20)
        {
            horasBonus = horaSaida - 20;
            horaSaida = 20;
            pagamento = ((horaSaida - horaChegada) * valorHora) + (horasBonus * (valorHora * 1.2));
            printf("\nHaver� um pagamento b�nus! Seu funcion�rio, ao trabalhar %d horas, dever� ganhar um total de: R$%.2f por dia. R$%.2f por m�s", ((horaSaida + horasBonus) - horaChegada), pagamento,  pagamento * 21);
        } else {
            pagamento = (horaSaida - horaChegada) * valorHora;
            printf("N�o haver� b�nus! Seu funcion�rio, ao trabalhar %d horas, dever� ganhar um total de: R$%.2f por dia. R$%.2f por m�s", horaSaida - horaChegada, pagamento, pagamento * 21);
        }
        
        printf("\n\nVoc� deseja rodar o c�digo novamente?\nDigite:\n 1 - Rodar novamente\n 2 - Parar o c�digo\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);
}
