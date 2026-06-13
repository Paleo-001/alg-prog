/* ============================================================================
 * Nome do Arquivo: gestao-dimensoes.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 12/06/2026
 * Descrição:       Gestão de Dimensões
 * Compilação:      gcc gestao-dimensoes.c -o gestao-dimensoes
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float comodos[5][2];
    int i;
    printf("--- Cadastro de Cômodos (Arquitetura) ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Cômodo %d - Largura e Comprimento: ",i+1);
        scanf("%f %f", &comodos[i][0],&comodos[i][1]);
    }
    printf("\nRelatório de Áreas:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Cômodo %d: %.2fm x %.2fm = %.2fm²\n",i+1,comodos[i][0],comodos[i][1],comodos[i][0] * comodos[i][1]);
    }
    return 0;
}