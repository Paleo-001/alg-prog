/* ============================================================================
 * Nome do Arquivo: ler_csv.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 05/06/2026
 * Descrição:       Leitor de arquivo csv
 * Compilação:      gcc ler_csv.c -o ler_csv
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int valores[5];
    int i;
    FILE *arquivo;
    arquivo = fopen("dados.txt","r");
    if(arquivo == NULL){
        printf("Erro: O arquivos 'dados.csv' não foi encontrado na pasta.\n");
        return 1;
    }
    for(i = 0; i < 5; i++){
        fscanf(arquivo,"%d,",&valores[i]);
    }
    fclose(arquivo);
    printf("--- Dados caregados do Arquivo CSV ---\n");
    for(i = 0; i < 5; i++){
        printf("Vetor na posição [%d] = %d\n",i,valores[i]);
    }
    
    return 0;
}