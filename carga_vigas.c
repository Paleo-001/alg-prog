/* ============================================================================
 * Nome do Arquivo: carga_vigas.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 12/06/2026
 * Descrição:       Monitoramento de Carga de Vigas
 * Compilação:      gcc carga_vigas.c -o carga_vigas
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char id[10];
    int carga, i, total = 0;
    FILE *entrada = fopen("cargas.csv","w+");
    FILE *saida;
    printf("--- Monitoramento de Cargas (Engenharia) ---\n");
    for(i=0;i<3;i++){
        printf("ID da Viga e carga (kg): ");
        scanf("%s %d",id,&carga);
        fprintf(entrada,"%s;%d\n",id,carga);
    }
    rewind(entrada);
    for(i=0;i<3;i++){
        fscanf(entrada,"%[^;];%d\n",id,&carga);
        total += carga;
    }
    fclose(entrada);
    saida = fopen("relatorio.txt","w");
    fprintf(saida,"Carga da Estrutura Total: %'d kg\n", total);
    fclose(saida);
    printf("\nRelatório gerado em 'relatorio.txt' com total de %'d kg.\n",total);
    return 0;
}