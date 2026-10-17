#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    double peso = 0.0;
    int bois_prontos = 0, total_pesado = 0;
    printf("--- Sistema de Triagem Pecuária ---\n");
    printf("Para encerrar a operação, digite o peso -1.\n\n");
    printf("Peso do animal na balança (kg): ");
    scanf("%lf", &peso);
    while (peso != -1){
        total_pesado++;
        if (peso >= 500.0){
            printf(" -> Veredito: Animal atingiu o peso de abate.\n");
            bois_prontos++;
        } else {
            printf(" -> Veredito: Retornar para a fase de engorda.\n");
        }
        printf("\nPeso do próximo animal na balança (kg): ");
        scanf("%lf", &peso);
    }
    printf("\n--- Relatório Final do lote ---\n");
    printf("Total de animais processados: %d\n", total_pesado);
    printf("Total de cabeças prontas para abate (>= 500 kg): %d\n", bois_prontos);
    return 0;
}