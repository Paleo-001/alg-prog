/* ============================================================================
 * Nome do Arquivo: monitora_amostras.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 12/06/2026
 * Descrição:       Monitoramento de Amostras
 * Compilação:      gcc monitora_amostras.c -o monitora_amostras
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char codigos[3][10];
    int glicose[3], i;
    FILE *arq = fopen("amostras.csv","r");
    if(arq == NULL) return 1;
    for(i=0;i<3;i++){
        fscanf(arq,"%[^;];%d\n",codigos[i],&glicose[i]);
        printf("Amostra %s: %d mg/dL ", codigos[i], glicose[i]);
        if(glicose[i] > 120) printf("- ATENÇÃO: Nível alto!");
        printf("\n");
    }
    fclose(arq);
    return 0;
}