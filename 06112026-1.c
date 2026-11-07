#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHAS 3
#define COLUNAS 3

int main(void){
    setlocale(LC_ALL,"");
    float sondagem[LINHAS][COLUNAS];
    float somaResistencia = 0.0f;
    float mediaResistencia;
    float menorResistencia;
    int linhaCritica = 0;
    int colunaCritica = 0;
    int i,j;
    printf("==============================================================\n");
    printf("=  LABORATÓRIO DE GEOTECNIA: MAPA DE CARGA DO TERRENO (SPT) =\n");
    printf("==============================================================\n");
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            printf("Resistência do solo na estaca [%d][%d] (MPa): ", i, j);
            if (scanf("%f", &sondagem[i][j]) != 1){
                printf("Erro na leitura de dados. Abortando o programa.\n");
                return EXIT_FAILURE;
            }
            somaResistencia += sondagem[i][j];
        }
    }
    menorResistencia = sondagem[0][0];
    for(i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            if (sondagem[i][j] < menorResistencia){
                menorResistencia = sondagem[i][j];
                linhaCritica = i;
                colunaCritica = j;
            }
        }
    }
    mediaResistencia = somaResistencia / (LINHAS * COLUNAS);
    printf("\nMAPA BIDIMENSIONAL DE TENSÕES ADMISSÍVEIS (MPa):\n");
    printf("       |  Coluna 0  |  Columa 1  |  Coluna 2  |\n");
    printf("-----------------------------------------------\n");
    for (i = 0;i < LINHAS; i++){
        printf("Linha %d|", i);
        for (j = 0; j < COLUNAS; j++){
            printf("   %7.2f  |", sondagem[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------------------\n\n");
    printf("RELATÓRIO TÉCNICO DE ENGENHARIA:\n");
    printf(" -> Resistência média da malha: %.2f MPa\n", mediaResistencia);
    printf(" -> Ponto de fragilidade máxima: %.2f MPa na coordenada [%d][%d]\n", menorResistencia, linhaCritica, colunaCritica);
    return EXIT_SUCCESS;
}