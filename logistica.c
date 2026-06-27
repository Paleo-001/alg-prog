/* ============================================================================
 * Nome do Arquivo: logistica.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 26/06/2026
 * Descrição:       Logística de Comex
 * Compilação:      gcc logistica.c -o logistica
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Um porto armazena o valor de 6 contêineres. Contêineres com valor acima de R$ 50.000,00 exigem inspeção alfandegária rigorosa.
**Requisitos:**
1. Utilize um vetor para armazenar os 6 valores.
2. Utilize um laço `para` (for) para leitura e, simultaneamente, armazene em um segundo vetor apenas os índices dos contêineres que exigem inspeção (valor > 50.000).
3. Ao final, exiba o vetor de índices de inspeção.
    */
    float valores[6];
    int insp[6], i, cont = 0;
    for(i = 0; i < 6; i++) {
        printf("Valor do conteiner %d: ", i + 1);
        scanf("%f", &valores[i]);
        if (valores[i] > 50000) {
            insp[cont] = i + 1;
            cont++;
        }
    }
    printf("\nConteineres exigindo inspeção (IDs): ");
    for (i = 0; i < cont; i++) printf("%d ", insp[i]);
    printf("\n");
    return 0;
}