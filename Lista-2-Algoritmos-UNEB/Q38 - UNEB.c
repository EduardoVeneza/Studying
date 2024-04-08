/*Escreva um algoritmo que leia três datas, cada uma composta de Dia, Mês 
e Ano, e as escreva em ordem cronológica crescente. Ex: se as datas são 
01/04/2000, 17/05/1988 e 23/10/1969, o algoritmo deve escrever 23/10/1969 
17/05/1988 01/04/2000.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "");

    typedef char strings[15];
    int j, ano1, ano2, ano3;
    int diaano1, mesano1, anoano1;          //Declaração de variáveis
    int diaano2, mesano2, anoano2;
    int diaano3, mesano3, anoano3;
    j = 1;
    do
    {
        printf("Digite a 1º data que deseja comparar! No formato ddmmaaaa\n\n EX: 15/08/2005 = 15082005\n");
        scanf("%d", &ano1); //Coleta de informações
        fflush(stdin);

        anoano1 = ano1%10000;
        diaano1 = ano1/1000000; //Divide o formato em em dias, meses e anos
        mesano1 = (ano1%1000000) / 10000;

        if (diaano1 > 31 || mesano1 > 12) {
            printf("\nVocê digitou uma data inválida\n\nTente novamente!\n\n----------------------------------------------------------------------------\n\n");
            continue;   // Verificador de informações
        }

        printf("\nOk! Você selecionou a data: %d/%d/%d\n", diaano1, mesano1, anoano1);



        do{
        printf("Digite a 2º data que deseja comparar! No formato ddmmaaaa\n\n EX: 15/08/2005 = 15082005\n");
        scanf("%d", &ano2);     //Coleta de informações
        fflush(stdin);

        anoano2 = ano2%10000;
        diaano2 = ano2/1000000; //Divide o formato em em dias, meses e anos
        mesano2 = (ano2%1000000) / 10000;

        if (diaano2 > 31 || mesano2 > 12) {
            printf("\nVocê digitou uma data inválida\n\nTente novamente!\n\n----------------------------------------------------------------------------\n\n");
            printf("\nVocê já selecionou a data: %d/%d/%d\n", diaano1, mesano1, anoano1);
            continue; //Verificador de informações
        }

        printf("\nOk! Você selecionou a data: %d/%d/%d\n", diaano2, mesano2, anoano2); // Confirmação para o usuário
        
        break;
        } while(1);
        
        do{
        printf("Digite a 2º data que deseja comparar! No formato ddmmaaaa\n\n EX: 15/08/2005 = 15082005\n");
        scanf("%d", &ano3); // Coleta de informações
        fflush(stdin);

        anoano3 = ano3%10000;
        diaano3 = ano3/1000000; //Divide o formato em em dias, meses e anos
        mesano3 = (ano3%1000000) / 10000;

        if (diaano3 > 31 || mesano3 > 12) {
            printf("\nVocê digitou uma data inválida\n\nTente novamente!\n\n----------------------------------------------------------------------------\n\n");
            printf("\nVocê já selecionou a data: %d/%d/%d\n", diaano1, mesano1, anoano1);
            printf("\nVocê também já selecionou a data: %d/%d/%d", diaano2, mesano2, anoano2);
            continue; //Verificador de informações
        }

        printf("\nOk! Você selecionou a data: %d/%d/%d\n", diaano3, mesano3, anoano3); //Confirmação para o usuário
        
        break;
        } while(1);
        
        /*Parte do código que falta! 
        
        Aqui será aonde a comparação das datas será feita! E logo em seguida exibida pro usuário

        */

        printf("\nDeseja repetir o código? Digite 1 para Sim, digite 2 para não.\n");
        scanf("%d", &j);
        fflush(stdin);

    } while (j == 1);
    


}