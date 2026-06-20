/* ============================================================================
 * Nome do Arquivo: media_ponderada.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 19/06/2026
 * Descrição:       Calcula média ponderada
 * Compilação:      gcc media_ponderada.c -o media_ponderada
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Faça um programa que armazene 4 notas bimestrais de um aluno em um vetor. Sabendo que a média dos dois primeiros bimestres tem peso de 40% na nota final e a média dos dois últimos tem peso de 60%, calcule e exiba a média final.
    */
    double notas[4], mediaFinal;
    int i;
    for(i=0;i<4;i++){
        printf("Digite a %iª nota: ",i+1);
        scanf("%lf",&notas[i]);
    }
    double mediaS1 = (notas[0] + notas[1])/2.0;
    double mediaS2 = (notas[2] + notas[3])/2.0;
    mediaFinal = (mediaS1 * 0.4) + (mediaS2 * 0.6);
    printf("\nNotas digitadas:\n");
    for(i=0;i<4;i++){
        printf("%dª nota = %.1f\n",i+1,notas[i]);
    }
    printf("Média final = %.2f\n",mediaFinal);
    return 0;
}