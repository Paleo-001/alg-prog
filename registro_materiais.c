/* ============================================================================
 * Nome do Arquivo: registro_materiais.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 12/06/2026
 * Descrição:       Registro de Materiais
 * Compilação:      gcc registro_materiais.c -o registro_materiais
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char nome[30];
    int qtd, i;
    FILE *arq = fopen("estoque.csv","w");

    printf("--- Registro de Estoque Construtora ---\n");
    for(i = 0; i < 3; i++){
        printf("Nome do material e quantidade: ");
        scanf("%s %d",nome,&qtd);
        fprintf(arq,"%s;%d\n",nome,qtd);
    }
    fclose(arq);
    printf("Dados salvos em estoque.csv com sucesso!\n");
    return 0;
}