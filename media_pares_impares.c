/* ============================================================================
 * Nome do Arquivo: media_pares_impares.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 19/06/2026
 * Descrição:       Média de Pares e Ímpares
 * Compilação:      gcc media_pares_impares.c -o media_pares_impares
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Leia 12 números inteiros e separe-os em dois vetores: vetpar e vetimpar. Ao final, exiba os vetores e a média dos valores contidos em cada um deles.
    */
    int vetpar[12], vetimpar[12], num;
    int contPar = 0, contImpar = 0;
    double somaPar = 0.0, somaImpar = 0.0;
    for(int i =0;i<12;i++){
        printf("Digite o %iº número: ",i+1);
        scanf("%d",&num);
        if(num % 2 == 0){
            vetpar[contPar++] = num;
            somaPar += num;
        } else {
            vetimpar[contImpar++] = num;
            somaImpar += num;
        }
    }
    printf("\n--- Pares ---\nValores:\n");
    for(int i;i<contPar;i++) printf("%d",vetpar[i]);
    if(contPar>0) printf("\nMédia dos Pares: %.2f\n",somaPar / contPar);
    else printf("\nNenhum número par digitado.\n");

    printf("\n--- Ímpares ---\nValores:\n");
    for(int i =0;i<contImpar;i++) printf("%d",vetimpar[i]);
    if(contImpar>0) printf("\nMédia dos Ímpares: %.2f\n", somaImpar / contImpar);
    else printf("\nNenhum número ímpar digitado.\n");
    return 0;
}