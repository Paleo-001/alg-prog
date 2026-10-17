#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    double ph;
    printf("--- Sensor de pH do Aquário ---\n");
    printf("Digite o valor atual do pH da água: ");
    scanf("%lf", &ph);
    if (ph < 7.8){
        printf("Alerta: Água muito ácida para os Corais.\n");
    } else if (ph >= 7.8 && ph <= 8.5) {
        printf("Status: pH ideal para a vida marinha.\n");
    } else {
        printf("Alerta: Água alcalina em nível perigoso!\n");
    }
    return 0;
}