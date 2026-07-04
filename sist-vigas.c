/* ============================================================================
 * Nome do Arquivo: sist-vigas.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 03/07/2026
 * Descrição:       Sistema de Monitoramento de Carga em Vigas Estruturais
 * Compilação:      gcc -Wall -Wextra -std=c2x sist-vigas.c -o sist-vigas
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>
#define LIMITE_SEGURANCA 50.0
int main() {
    setlocale(LC_ALL,"");
    /*Um escritório de engenharia precisa monitorar a carga (em toneladas) exercida sobre 8 vigas de sustentação de um edifício novo. A norma técnica da obra estabelece que nenhuma viga deve exceder o limite de 50.0 toneladas de carga. O seu programa deve processar os dados vindos dos sensores instalados nessas vigas.*/
    float cargas[8];
    int i;
    //const float LIMITE_SEGURANCA = 50.0;
    printf("--- Monitor de Integridade Estrutural (Edifício SkyTower) ---\n");
    for(i=0;i<8;i++){
        printf("Leitura do Sensor da Viga %d (toneladas): ",i+1);
        scanf("%f",&cargas[i]);
    }
    printf("\n--- Relatório de Auditoria ---\n");
    for(i=0;i<8;i++){
        printf("Viga %d: %.2f t -> ",i+1,cargas[i]);
        if(cargas[i] > LIMITE_SEGURANCA){
            printf("[CRÍTICO] INTERVENÇÃO NECESSÁRIA!\n");
        } else {
            printf("[OK] Estável\n");
        }
    }
    return 0;
}