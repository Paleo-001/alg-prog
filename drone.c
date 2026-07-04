/* ============================================================================
 * Nome do Arquivo: drone.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 03/07/2026
 * Descrição:       Sistema de Previsão de Colisão de Drone
 * Compilação:      gcc -Wall -Wextra -std=c2x *.c -o drone
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");
    /*Um drone possui 5 sensores de ultrassom nas laterais. O programa deve ler a distância (em cm) de cada sensor. Se qualquer sensor detectar um obstáculo a menos de 20cm, o sistema deve acionar um "Alerta de Emergência" e exibir qual sensor detectou o perigo.*/
    float sensores[5];
    int i;
    printf("--- Monitoramento de Sensores de Proximidade ---\n");
    for(i = 0; i <5; i++){
        printf("Leitura do sensor %d (cm): ",i+1);
        scanf("%f",&sensores[i]);
    }
    printf("\nRelatório de Status\n");
    for(i=0;i<5;i++){
        if(sensores[i] < 20.0){
            printf("[ALERTA] Sensor %d detectou obstáculo a %.2f cm! Frenagem de emergência.\n",i+1,sensores[i]);
        } else {
            printf("Sensor %d: Operação Segura (%.2f cm)\n",i+1,sensores[i]);
        }
    }
    return 0;
}