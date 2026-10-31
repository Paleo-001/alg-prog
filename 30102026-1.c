#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    float temperaturas[6];
    float soma = 0.0;
    float media = 0.0;
    printf("=== SISTEMA DE MONITORAMENTO TÉRMICO - ENFERMAGEM ===\n");
    for(int i = 0; i < 6; i++){
        printf("Digite a temperatura corporal da %dª aferição (°C): ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }
    media = soma / 6;
    printf("\n=== RELATÓRIO DO PLANTÃO ===\n");
    for(int i = 0; i < 6; i++){
        printf("Aferição [%d]: %.2f°C\n", i + 1, temperaturas[i]);
    }
    printf("Temperatura média: %.2f°C\n", media);
    return 0;
}