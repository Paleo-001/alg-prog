/* ============================================================================
 * Nome do Arquivo: cloud.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 03/07/2026
 * Descrição:       Balanceador de Carga
 * Compilação:      gcc cloud.c -o cloud
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /* Temos 5 servidores em um cluster. O programa lê a carga atual (CPU em %) de cada um. Se a carga for maior que 80%, o servidor precisa de escalonamento (auto-scaling). O programa deve listar todos os servidores que precisam de escala.*/
    float carga[5];
    int i, precisa_escala = 0;
    const float teto = 80.0;
    printf("---Monitor de Cluster ---\n");
    for(i=0;i<5;i++){
        printf("Carga do Servidor %d (%%): ",i+1);
        scanf("%f",&carga[i]);
    }
    printf("\n--- Recomendação de Infraestrutura ---\n");
    for(i=0;i<5;i++){
        if(carga[i] > teto){
            printf("Servidor %d: [ESCALONAR] Carga crítica de %.1f%%\n",i+1,carga[i]);
            precisa_escala++;
        }
    }
    if(precisa_escala == 0) printf("Nenhum servidor em estado crítico.\n");
    return 0;
}