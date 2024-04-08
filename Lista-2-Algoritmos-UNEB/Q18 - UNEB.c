/*Calculadora de média harmônica! Com verificadores e loop*/



#include <stdio.h>
#include <locale.h>         // bibliotecas
#include <math.h>


int j;
float mh, p1, p2, p3;
int main (){
    setlocale(LC_ALL, "Portuguese_Brazil"); //set de linguagem

do{             // inicio do loop

    printf("Digite a nota da primeira prova!\n");
    scanf("%f", &p1);
    fflush(stdin);
    printf("Digite a nota da segunda prova!\n");        // coleta de dados!
    scanf("%f", &p2);
    fflush(stdin);
    printf("Digite a nota da terceira prova!\n");
    scanf("%f", &p3);
    fflush(stdin);

    if(p1 > 10 || p2 > 10 || p3 > 10 || p1 < 0 || p2 < 0 || p3 < 0){
        printf("Uma nota maior que 10 ou menor que 0 foi digitada! Portanto o código será encerrado!");        // validador de informações
        return 0;
    }

    mh = 3/(1/p1 + 1/p2 + 1/p3);

    if(mh >= 6){
        if(mh >= 6 && mh < 7){
            printf("O aluno obteve média harmônica: %.1f. Desempenho: Satisfatório\n", mh);
        }
        else if(mh >= 7 && mh < 8){
            printf("O aluno obteve média harmônica: %.1f. Desempenho: Bom\n", mh);             // se ele passou, classificando desempenho
        }
        else if(mh >= 8 && mh < 9){
            printf("O aluno obteve média harmônica: %.1f. Desempenho: Excelente\n", mh);
        }
        else if(mh >= 9){
            printf("O aluno obteve média harmônica: %.1f. Desempenho: Espetacular\n", mh);
        }

        // se ele não passou...
    } else if(mh < 6){
        float pf;
        
        if (p1 < p2 && p1 < p3) // p1 é a menor
        {
            if((3/(0.1 + 1/p2 + 1/p3)) < 6){
                printf("Média impossível de se recuperar!\n");
            } else {
                printf("Digite a nota da prova final: \n");
                scanf("%f", &pf);
                fflush(stdin);
                mh = 3/(1/pf + 1/p2 + 1/p3);
                if(mh >= 6){
                    printf("O aluno passou! Sua média harmônica final, substituindo o valor da prova 1 foi: %.1f\n", mh);
                } else if(mh < 6){
                    printf("REPROVADO! Média harmônica: %.1f\n", mh);
                }

            }

        } else if (p2 < p1 && p2 < p3){ // p2 é menor
            if((3/(1/p1 + 0.1 + 1/p3)) < 6){
                printf("Média impossível de se recuperar!\n");
            } else {
                printf("Digite a nota da prova final: \n");
                scanf("%f", &pf);
                fflush(stdin);
                mh = 3/(1/p1 + 1/pf + 1/p3);
                if(mh >= 6){
                    printf("O aluno passou! Sua média harmônica final, substituindo o valor da prova 2 foi: %.1f\n", mh);
                } else if(mh < 6){
                    printf("REPROVADO! Média harmônica: %.1f\n", mh);
                }

            }

        } else if(p3 < p1 && p3 < p2){ // p3 é menor
            if((3/(1/p1 + 1/p2 + 0.1)) < 6){
                printf("Média impossível de se recuperar!\n");
            } else {
                printf("Digite a nota da prova final: \n");
                scanf("%f", &pf);
                fflush(stdin);
                mh = 3/(1/p1 + 1/p2 + 1/pf);
                if(mh >= 6){
                    printf("O aluno passou! Sua média harmônica final, substituindo o valor da prova 3 foi: %.1f\n", mh);
                } else if(mh < 6){
                    printf("REPROVADO! Média harmônica: %.1f\n", mh);
                }

            }

        }
    
    }

    printf("Deseja calcular outra média? Se sim digite 1, se não digite 2\n");
    scanf("%d", &j);                    // escolha de loop
    fflush(stdin);
}   while (j == 1);


}
