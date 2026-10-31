#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(void){
    setlocale(LC_ALL,"");
    const int tamanho = 5;
    float ensaios[tamanho];
    float maior_resistencia = 0;
    int indice_maior = 0;
    char inicio[7] = "";
    char fim[7] = "";
    printf("=== CONTROLE TECNOLÓGICO DE CONCRETO - ENG CIVIL ===\n");
    for(int i = 0; i < tamanho; i++){
        printf("Informe a resistência do corpo de prova %d (em MPa): ", i + 1);
        scanf("%f", &ensaios[i]);
        if(ensaios[i] > maior_resistencia){
            indice_maior = i;
            maior_resistencia = ensaios[i];
        }
    }
    printf("\n=== RESULTADOS DOS ENSAIOS===\n");
    printf("Maior resistência registrada: %.2f MPa (Corpo de Prova no Índice [%d])\n", ensaios[indice_maior], indice_maior);
    for(int i = 0; i < tamanho; i++){
        if(i == indice_maior){
            strcpy(inicio,"\033[1m");
            strcpy(fim,"\033[0m");
        } else {
            strcpy(inicio,"");
            strcpy(fim,"");
        }
        printf("%sEnsaio %d (Corpo de Prova %d), com resistência de %.2f%s\n", inicio, i + 1, i, ensaios[i], fim);
    }
    return 0;
}