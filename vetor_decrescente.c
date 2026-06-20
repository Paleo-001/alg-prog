/* ============================================================================
 * Nome do Arquivo: vetor_decrescente.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 19/06/2026
 * Descrição:       Vetor Decrescente
 * Compilação:      gcc vetor_decrescente.c -o vetor_decrescente
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Escreva um programa que leia 6 números inteiros do usuário e os armazene em um vetor. O programa deve exibir os números em ordem decrescente (do maior para o menor).
    */
    int vet[6];
    int temp, i;
    for(i=0;i<6;i++){
        printf("Digite o %iº número: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<5;i++){
        for(int j = 0;j<5-i;j++){
            if(vet[j] < vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    printf("\nNúmeros em ordem decrescente:\n");
    for(i=0;i<6;i++){
        printf("%d",vet[i]);
        printf("\n");
    }

    return 0;
}