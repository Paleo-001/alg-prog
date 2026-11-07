#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 4
int main(void){
    setlocale(LC_ALL,"");
    float frete[TAMANHO][TAMANHO];
    float custoTotalOrigem[TAMANHO];
    int i, j;
    printf("============================================================\n");
    printf("=   SISTEMA DE GESTÃO DE TARIFAS LOGÍSTICAS INTERCENTROS   =\n");
    printf("============================================================\n");
    for (i = 0; i < TAMANHO; i++){
        custoTotalOrigem[i] = 0.0f;
        for (j = 0; j < TAMANHO; j++){
            if (i == j){
                frete[i][j] = 0.0f;
            } else {
                printf("Informe a tarifa de frete do CD %d para o CD %d (R$ mil): ", i+1, j+1);
                scanf("%f", &frete[i][j]);
            }
            custoTotalOrigem[i] += frete[i][j];
        }
    }
    printf("\nMATRIZ DE TARIFAS DE TRANSFERÊNCIA (R$ MIL):\n");
    printf("Origens \\ Destinos |   CD 1   |   CD 2   |   CD 3   |   CD 4   |\n");
    printf("----------------------------------------------------------------\n");
    for (i = 0; i < TAMANHO; i++){
        printf("      CD %d         |", i + 1);
        for (j = 0; j < TAMANHO; j++){
            printf(" %7.2f    |", frete[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------------------------------\n\n");
    printf("CONSOLIDAÇÃO DE CUSTO TOAL DE EXPEDIÇÃO POR POLO:\n");
    for (i = 0; i < TAMANHO; i++){
        printf(" -> Centro de Distribuição %d: Custo acumulado = R$ %8.2f mil\n", i + 1, custoTotalOrigem[i]);
    }
    return EXIT_SUCCESS;
}