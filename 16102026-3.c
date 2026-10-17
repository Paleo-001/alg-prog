#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    double chuva_diaria, chuva_total = 0.0, media_semanal;
    int dias = 7;
    printf("--- Boletim Meteorológico Semanal ---\n");
    for (int i = 1; i <= dias; i++){
        printf("Informe a precipitação do dia %d (mm): ",i);
        scanf("%lf",&chuva_diaria);
        chuva_total += chuva_diaria;
    }
    media_semanal = chuva_total / dias;
    printf("\n--- Resumo do Boletim ---\n");
    printf("Volume total da semana: %.2lf mm.\n", chuva_total);
    printf("Média diária de chuva: %.2lf mm.\n",media_semanal);
    if (chuva_total > 100.0){
        printf("[ALERTA DEFESA CIVIL] Volume de chuvas superior a 100 mm. Risco de alagamentos!\n");
    }
    return 0;
}