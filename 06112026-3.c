#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ALAS 3
#define BOXES 3
int main(void){
    // Define idioma
    setlocale(LC_ALL,"");
    // Declara variáveis
    int uti[ALAS][BOXES];
    int totalLeitos = ALAS * BOXES;
    int ocupados = 0, criticos = 0, i, j;
    // Informa usuário, do que se trata
    printf("==========================================================\n");
    printf("=   PAINEL DE SUPERVISÃO DE LEITOS DA UTI - ESCALA NAS   =\n");
    printf("=   (0: Desocupado | 1 a 4: Estável/Grave | 5: Crítico)  =\n");
    printf("==========================================================\n");
    // Coleta e validação de dados
    for (i = 0; i < ALAS; i++){
        for (j = 0; j < BOXES; j++){
            do {
                printf("Classificação do leito [Ala %d][Box %d] ( 0 a 5): ", i+1, j+1);
                if (scanf("%d", &uti[i][j]) != 1){
                    printf("Entrada inválida. Abortando...\n");
                    return EXIT_FAILURE;
                }
                if (uti[i][j] < 0 || uti[i][j] > 5){
                    printf("Valor inválido! Digite uma nota entre 0 e 5.\n");
                }
            } while (uti[i][j] < 0 || uti[i][j] > 5);
            if (uti[i][j] > 0){
                ocupados++;
            }
            if (uti[i][j] == 5){
                criticos++;
            }
        }
    }
    float taxaOcupacao = ((float)ocupados / (float)totalLeitos) * 100.0f;
    // Imprimir o mapa de leitos
    printf("\nMAPA TOPOLÓGICO DA UNIDADE DE TERAPIA INTENSIVA:\n");
    printf("       |   Box 1   |   Box 2   |   Box 3   |\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < ALAS; i++){
        printf(" Ala %d |", i+1);
        for (j = 0; j < BOXES; j++){
            if (uti[i][j] == 0){
                printf("   LIVRE   |");
            } else {
                printf("   GRAU %d  |", uti[i][j]);
            }
        }
        printf("\n");
    }
    printf("--------------------------------------------\n");
    // Relatório de gestão assistencial
    printf("RELATÓRIO ASSISTENCIAL DE ENFERMAGEM:\n");
    printf(" -> Ocupação geral da unidade: %d/%d (%.1f%%)\n", ocupados, totalLeitos, taxaOcupacao);
    printf(" -> Casos de gravidade máxima (Nível 5): %d paciente(s)\n", criticos);
    if (criticos > 0){
        printf(" -> Leitos críticos prioritários nas coordenadas:\n");
        for (i = 0; i < ALAS; i++){
            for (j = 0; j < BOXES; j++){
                if (uti[i][j] == 5){
                    printf("    * Ala %d, Box %d\n",i+1,j+1);
                }
            }
        }
    } else {
        printf(" -> Nenhum leito com demanda crítica de nível 5 neste turno.\n");
    }
    return EXIT_SUCCESS;
}