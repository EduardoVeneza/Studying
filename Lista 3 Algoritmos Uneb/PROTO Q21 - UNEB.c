#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int X[20], i, j, rep[20];

    //Entrada de dados
    for (i = 0; i < 20; i++){
        printf("Digite o %d valor!\n", i+1);
        scanf("%d", &X[i]);
        fflush(stdin);
    }
    

}
