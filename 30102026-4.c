#include <stdio.h>
#include <locale.h>
#define leituras 4
int main(void){
    setlocale(LC_ALL,"");
    int altitude_prevista[leituras] = {
        10000,7000,4000,2000
    };
    int altitude_real[leituras];
    printf("=== MONITORAMENTO DE PERFIL DE DESCIDA - CIÊNCIAS AERONÁUTICAS ===\n");
    for(int i = 0; i < leituras; i++){
        printf("Waypoint %d (Esperado: %d pés) - Digite a altitude real: ", i + 1, altitude_prevista[i]);
        scanf("%d", &altitude_real[i]);
    }
    printf("\n=== CHECAGEM DE GRADIENTE DE APROXIMAÇÃO ===\n");
    for(int i = 0; i < leituras; i++){
        int diferenca = altitude_real[i] - altitude_prevista[i];
        printf("Ponto [%d]\tPrevisto: %'d pés\tLido: %'d pés \tDesvio: %'+d pés\n", i + 1, altitude_prevista[i], altitude_real[i], diferenca);
    }
    return 0;
}