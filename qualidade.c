/* ============================================================================
 * Nome do Arquivo: qualidade.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 26/06/2026
 * Descrição:       Monitoramento de Qualidade (Eng. Química)
 * Compilação:      gcc qualidade.c -o qualidade
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Uma usina de processamento precisa monitorar a pureza de 10 amostras de um catalisador. O sistema deve ler a porcentagem de pureza de cada amostra (valor entre 0 e 100).

1. Use um vetor de `float` para armazenar as 10 amostras.
2. Utilize um laço `do-while` para garantir que o usuário insira apenas valores válidos (0-100).
3. Após o preenchimento, percorra o vetor e utilize estruturas condicionais para contar e exibir:
* Quantas amostras possuem pureza abaixo de 70% (Alerta de refugo).
* A média de pureza de todas as amostras.
    */
    float pureza[10], soma = 0;
    int i, alertas = 0;
    
    for(i = 0; i < 10; i++){
        do {
            printf("Digite a pureza da amostra %d (0 - 100): ", i + 1);
            scanf("%f", &pureza[i]);
        } while (pureza[i] < 0 || pureza[i] > 100);
        soma += pureza[i];
        if(pureza[i] < 70.0) alertas++;
    }
    printf("\nMédia de pureza: %.2f%%\n", soma / 10);
    printf("Amostras com alerta de refugo: %d\n", alertas);
    return 0;
}