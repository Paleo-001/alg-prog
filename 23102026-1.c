#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    double concentracao;
    printf("--- Monitoramento Farmacológico ---\n");
    printf("Informe a concentração sérica do fármaco (µg/mL): ");
    if(scanf("%lf", &concentracao) != 1 || concentracao < 0.0){
        printf("Erro: Leitura inválida.\n");
        return 1;
    }
    if(concentracao < 10.0){
        printf("Diagnóstico: Subterapêutico (Aumentar a dosagem).\n");
    } else if (concentracao <= 25.0){
        printf("Diagnóstico: Faixa Terapêutica Adequada. \n");
    } else {
        printf("Diagnóstico: ALERTA - Nível Tóxico (Suspender administração).\n");
    }
    return 0;
}