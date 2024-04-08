/*Questão ainda em desenvolvimento!

até agora temos: os separadores, variaveis guardando os valores dos meses, dias e anos
próximo passo: Encontrar uma forma de encontrar a idade do usuário em DIAS, assim depois só convertendo novamente os dias totais de vida
para meses, anos e dias de vida

EX: 

Usuário digita: 10/10/2020 <- Dia Atual
Usuário digita: 28/07/2000 <- Data de nascimento

programa então: Encontrará a quantidade de dias entre essas datas e depois converterá para: x anos, x meses e x dias de vida

o problema atual está em fazer essa diferença de dias, pois são muitas possibilidades. Quando este for solucionado,
implementar o seguinte algoritmo adaptado de conversão de dias em anos, meses e dias de vida:

 ---------------------------------------------------------------------------------------------------------------------
    int restoDiasAnos, restoDiasMeses, anos, meses;
    anos = idadetotaldias / 365;
    restoDiasAnos = idadetotaldias % 365;
    if (restoDiasAnos < 30){
        printf("Voce tem %d anos e %d dias de vida", anos, restoDiasAnos);
    } else if(restoDiasAnos >= 30){
        meses = restoDiasAnos / 30;
        restoDiasMeses = restoDiasAnos % 30;
        printf("Voce tem %d anos, %d meses e %d dias de vida", anos, meses, restoDiasMeses);
        }
 ---------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int j, dataagrfrmt;

    do
    {
        printf("Digite o dia de hoje! No formato ddmmaaaa (Ex: 15082005 = 15/08/2005)\n");
        scanf("%d", &dataagrfrmt);  //Coleta de dados
        fflush(stdin);

        int  diaAgr, mesAgr, anoAgr, diaNas, mesNas, anoNas;


        anoAgr = dataagrfrmt%10000;
        diaAgr = dataagrfrmt/1000000; //Divide o formato em em dias, meses e anos
        mesAgr = (dataagrfrmt%1000000) / 10000;

        if(diaAgr > 31 || mesAgr > 12){
            printf("\nVocê digitou uma data inválida! Por favor digite novamente!\n\n");    //Verificador de datas
            continue;
        }

        printf("\nOk! Data atual selecionada: %d/%d/%d !\n\n", diaAgr, mesAgr, anoAgr); //confirmação para o usúario

        do{
        int datanasfrmt;
        
        printf("Digite agora o ano em que você nasceu! No formato ddmmaaaa (Ex: 15082005 = 15/08/2005)\n");
        scanf("%d", &datanasfrmt);
        fflush(stdin);

        anoNas = datanasfrmt%10000;
        diaNas = datanasfrmt/1000000; //divide o formato em dias, meses e anos
        mesNas = (datanasfrmt%1000000) / 10000;

        if(diaNas > 31 || mesNas > 12){
            printf("\nVocê digitou uma data inválida! Por favor digite novamente!\n"); //Verificador de datas
             printf("\nLembrando! A data atual selecionada ainda é: %d/%d/%d !\n\n", diaAgr, mesAgr, anoAgr);
            continue;
        }

        printf("\nOk! Data de nascimento selecionada: %d/%d/%d !\n\n", diaNas, mesNas, anoNas); //confirmação para o usuário
        break;
        } while (1);

       int idadetotaldias;

        /*Parte do código que falta! 
        
        Aqui será aonde a diferença entre as datas será calculada, transformada em dias e armazenada na variavel idadetotaldias,
        depois basta usar o algoritmo adaptado e todo o código estará pronto!

        */

        printf("\nDeseja rodar o código novamente?\nDigite 1 para repetir, 2 para parar\n");
        scanf("%d", &j);
        fflush(stdin);
    } while (j == 1);
    


}