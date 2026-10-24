#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    double umidade_atual, consumo_dia, limite_critico;
    int dias_decorridos = 0;
    printf("--- Sistema de Manejo de Irrigação ---\n");
    printf("Informe o volume útil de água no solo (mm): ");
    scanf("%lf", &umidade_atual);
    printf("Informe o limite crítico para irrigação (mm): ");
    scanf("%lf", &limite_critico);
    while(umidade_atual > limite_critico){
        dias_decorridos++;
        printf("Consumo do dia %d (mm): ", dias_decorridos);
        scanf("%lf", &consumo_dia);
        umidade_atual -= consumo_dia;
        printf("Umidade restante: %.2lf mm\n", umidade_atual);
    }
    printf("\n[ALERTA DE IRRIGAÇÃO] Solo atingiu nível crítico após %d dia(s).\n", dias_decorridos);
    printf("Volume residual: %.2lf mm.\n", umidade_atual);
    return 0;
}