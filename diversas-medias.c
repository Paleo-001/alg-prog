/* ============================================================================
 * Nome do Arquivo: diversas-medias.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 26/06/2026
 * Descrição:       Vetores e Diversas Médias
 * Compilação:      gcc diversas-medias.c -o diversas-medias
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Leia dois vetores (A e B) de 5 posições cada, do tipo inteiro. Armazene em um terceiro vetor (S), a soma das posições correspondentes de A e B. Exiba o vetor resultante, a média dos valores do vetor A, a média do vetor B, e a média final calculada entre as médias de A e B.
    */
    int A[5], B[5], S[5];
    double somaA = 0, somaB = 0;
    printf("--- Leitura do Vetor A ---\n");
    for(int i = 0; i < 5; i++){
        printf("Digite o valor para A[%i]: ", i);
        scanf("%d", &A[i]);
        somaA += A[i];
    }
    printf("\n--- Leitura do Vetor B ---\n");
    for(int i = 0; i < 5; i++){
        printf("Digite o valor para B[%i]: ", i);
        scanf("%d", &B[i]);
        somaB += B[i];

        S[i] = A[i] + B [i];
    }
    double mediaA = somaA / 5.0;
    double mediaB = somaB / 5.0;
    double mediaAB = (mediaA + mediaB) / 2.0;

    printf("\n--- Resultados ---\n");
    printf("Vetor S (Soma A+B): ");
    for(int i = 0; i < 5; i++) printf("%d ", S[i]);
    printf("\n\nMédia do Vetor A: %.2f\n", mediaA);
    printf("Média do Vetor B: %.2f\n", mediaB);
    printf("Média entre A e B: %.2f\n", mediaAB);
    return 0;
}