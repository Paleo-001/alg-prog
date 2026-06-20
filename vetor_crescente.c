/* ============================================================================
 * Nome do Arquivo: vetor_crescente.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 19/06/2026
 * Descrição:       Vetor com dados em Ordem Crescente
 * Compilação:      gcc vetor_crescente.c -o vetor_crescente
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
        Crie um programa que declare um array capaz de armazenar 5 números inteiros. O programa deve usar um laço de repetição para solicitar ao usuário que digite a idade de 5 pessoas. Em seguida, ordene as idades de forma crescente e imprima na tela.
    */
    int idades[5];
    int temp;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a idade da %iª pessoa: ",i+1);
        scanf("%d",&idades[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(idades[j] > idades[j+1]){
                temp = idades[j];
                idades[j] = idades[j+1];
                idades[j+1] = temp;
            }
        }
    }
    
    printf("\nAs idades em ordem crescente foram:\n");
    for(int i = 0; i < 5; i++){
        printf("%d anos\n",idades[i]);
    }
    return 0;
}