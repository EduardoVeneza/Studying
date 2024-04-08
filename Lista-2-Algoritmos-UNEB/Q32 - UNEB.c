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
        printf("Olá!, use esse programa para saber quanto seu trabalhador deve receber por turno! \n\n");
        printf("Neste programa você fornecerá quanto seu trabalhador ganha por hora!\nPS: lembrando que a partir das 20h ele ganhará 20%% a mais\n\n");

        printf("Para começar! Digite quanto seu trabalhador ganhará por hora trabalhada (em reais):\n");
        scanf("%f", &valorHora);
        fflush(stdin);

        printf("\nOk, seu trabalhador ganhará R$%.2f por hora!\n\n", valorHora);
        printf("Que horas ele irá chegar no trabalho?\n");
        scanf("%d", &horaChegada);
        fflush(stdin);

        printf("\nÓtimo, ele chegará às %d horas!\n\n", horaChegada);
        printf("Que horas ele irá encerrar o expediente?\n");
        scanf("%d", &horaSaida);
        fflush(stdin);
        //COLETA DE DADOS ^ ----------------------------------------------------------------------------

        if (horaSaida > 20)
        {
            horasBonus = horaSaida - 20;
            horaSaida = 20;
            pagamento = ((horaSaida - horaChegada) * valorHora) + (horasBonus * (valorHora * 1.2));
            printf("\nHaverá um pagamento bônus! Seu funcionário, ao trabalhar %d horas, deverá ganhar um total de: R$%.2f por dia. R$%.2f por mês", ((horaSaida + horasBonus) - horaChegada), pagamento,  pagamento * 21);
        } else {
            pagamento = (horaSaida - horaChegada) * valorHora;
            printf("Nâo haverá bônus! Seu funcionário, ao trabalhar %d horas, deverá ganhar um total de: R$%.2f por dia. R$%.2f por mês", horaSaida - horaChegada, pagamento, pagamento * 21);
        }
        
        printf("\n\nVocê deseja rodar o código novamente?\nDigite:\n 1 - Rodar novamente\n 2 - Parar o código\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);
}
