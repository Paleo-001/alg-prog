#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    double pm25;
    printf("--- Estação de Monitoramento Ambiental ---\n");
    printf("Informe a concentração atual de PM2.5 (µg/m³): ");
    scanf("%lf", &pm25);
    if (pm25 >= 0.0 && pm25 <= 12.0) {
        printf("Diagnóstico: Qualidade do Ar BOA.\n");
    } else if (pm25 > 12.0 && pm25 <= 35.4) {
        printf("Diagnóstico: Qualidade do Ar MODERADA.\n");
    } else if (pm25 > 35.4 && pm25 <= 55.4){
        printf("Diagnóstico: INSALUBRE para grupos sensíveis (Idosos e/ou Asmáticos).\n");
    } else if (pm25 > 55.4){
        printf("Diagnóstico: INSALUBRE - Alerta Geral de Saúde Pública.\n");
    } else {
        printf("Erro: Leitura de sensor inválida (valor negativo).\n");
    }
    return 0;
}