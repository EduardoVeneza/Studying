#include <stdio.h>
#include <math.h>            //bibliotecas
#include <locale.h>


int i, op;
i = 0;
int main (){
    setlocale(LC_ALL, "Portuguese");
    char nome[10];
    printf("Digite seu nome!\n");
    gets(nome);
    do {
    // SELECIONA A OPERAÇÃO //
        printf("Olá %s! Para usar a calculadora, digite o número da respectiva operação que deseja usar.\n 1 - SOMA\n 2 - SUBTRAÇÃO\n 3 - MULTIPLICAÇÃO\n 4 - DIVISÃO\n 5 - RAIZ QUADRADA\n 6 - POTÊNCIA\n", nome);
        scanf("%d", &op);
		if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5 && op != 6){
			printf("Você não selecionou uma operação, favor tente novamente!\n");
			continue;
		}
    // INDICA QUAIS COMANDOS SEGUIR, DE ACORDO COM A OPERAÇÃO SELECIONADA //

		float v1, v2, res;


        switch(op){
            case 1: { //SOMAR
				printf("Digite o primeiro valor que deseja somar\n");
				scanf("%f", &v1);
				fflush(stdin);
				printf("Digite o segundo valor que deseja somar\n");
				scanf("%f", &v2);
				fflush(stdin);
				res = v1 + v2;
				printf("O resultado da sua soma: %f + %f = %.8f\n", v1, v2, res);
                break;
            };
            case 2: { //SUBTRAIR
				printf("Digite o primeiro valor que deseja subtrair\n");
				scanf("%f", &v1);
				fflush(stdin);
				printf("Digite o segundo valor que deseja subtrair\n");
				scanf("%f", &v2);
				fflush(stdin);
				res = v1 - v2;
				printf("O resultado da sua subtração: %f - %f = %.8f\n", v1, v2, res);
                break;
            };
            case 3: { //MULTIPLICAR
				printf("Digite o primeiro valor que deseja multiplicar\n");
				scanf("%f", &v1);
				fflush(stdin);
				printf("Digite o segundo valor que deseja multiplicar\n");
				scanf("%f", &v2);
				fflush(stdin);
				res = v1 * v2;
				printf("O resultado da sua multiplicar: %f x %f = %.8f\n", v1, v2, res);
                break;
            };
            case 4: { //DIVIDIR
				printf("Digite o dividendo!\n");
				scanf("%f", &v1);
				fflush(stdin);
				printf("Digite o divisor!\n");
				scanf("%f", &v2);
				fflush(stdin);
				res = v1 / v2;
				printf("O resultado da sua divisão: %.8f / %.8f = %.8f\n", v1, v2, res);
                break;
            };
            case 5:{ // RAIZ QUADRADA
            	printf("Digite o valor que deseja tirar a raiz\n");
				scanf("%f", &v1);
				fflush(stdin);
				res = sqrt(v1);
				printf("A raiz quadrada de %.8f é %.8f.\n", v1, res);
				break;
			};
			case 6:{ // POTÊNCIA
				printf("Digite o valor que deseja elevar:\n");
				scanf("%f", &v1);
				fflush(stdin);
				printf("Digite o expoente:\n");
				scanf("%f", &v2);
				fflush(stdin);
				res = pow(v1, v2);
				printf("%.8f elevado a %.8f é igual a %.8f\n", v1, v2, res);
				break;
			}

            default:;
        }


    // loop //
    printf("Digite 1 se deseja efetuar outro cálculo! Se quiser parar, digite 2!\n");
    scanf("%d", &i);
    fflush(stdin);
    } while(i != 2);
    if(i == 2){
        printf("Ok, encerrando o programa.");
    }

}
