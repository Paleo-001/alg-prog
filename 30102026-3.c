#include <stdio.h>
#include <locale.h>
#define tamanho 5
int main(void){
    setlocale(LC_ALL,"");
    double faturamento[tamanho];
    double total_semana = 0.0;
    const char dia_semana[tamanho][14] = {
        "Segunda-feira",
        "Terça-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira"
    };
    printf("=== BALANÇO SEMANAL DE RECEITAS - ADMINISTRAÇÃO ===\n");
    for(int i = 0; i < tamanho; i++){
        printf("Informe a receita do %dº dia útil em R$: ", i + 1);
        scanf("%lf", &faturamento[i]);
        total_semana += faturamento[i];
    }
    printf("\n=== DEMONSTRATIVO DIÁRIO ===\n");
    for(int i = 0; i < tamanho; i++){
        printf("%s: \tR$ %'.2lf\n", dia_semana[i], faturamento[i]);
    }
    printf("Faturamento total da Semana: R$ %'.2lf\n", total_semana);
    return 0;
}