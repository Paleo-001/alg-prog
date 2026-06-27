/* ============================================================================
 * Nome do Arquivo: maior-menor.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 26/06/2026
 * Descrição:       Identificar Maior e Menor com Ponto Flutuante
 * Compilação:      gcc maior-menor.c -o maior-menor
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Escreva um programa que solicite 10 números de ponto flutuante ao usuário. Ao final, exiba qual foi o maior número, o menor número e a média de todos os valores digitados.
    */
    float vet[10], maior, menor, soma = 0.0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o %iº número: ",i+1);
        scanf("%f",&vet[i]);
        soma += vet[i];

        if( i == 0){
            maior = vet[i];
            menor = vet[i];
        } else {
            if(vet[i] > maior) {
                maior = vet[i];
            }
            if(vet[i] < menor) menor = vet[i];
        }
    }
    printf("\nMaior valor: %.2f\n",maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média de todos os valores: %.2f\n",soma/10.0);

    return 0;
}