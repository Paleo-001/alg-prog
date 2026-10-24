#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    /* Opções para o locale entre as aspas:
    pt_BR.UTF-8
    pt-BR.UTF-8
    .UTF-8
    Portuguese
    Portuguese_Brazil
    Portuguese_Brazil.1252
    */
    const int amostras = 4;
    double resistencia, soma = 0.0, media;
    printf("--- Ensaio de Compressão Axial (Concreto) ---\n");
    for(int i = 1; i <= amostras; i++){
        printf("Informe a resistência da amostra %d (MPa): ", i);
        scanf("%lf", &resistencia);
        soma += resistencia;
    }
    media = soma / amostras;
    printf("--- Relatório de Conformidade ---\n");
    printf("\nResistência média calculada: %.2lf MPa.\n", media);
    if(media >= 30.0){
        printf("Parecer: Lote Homologado para uso estrutural.\n");
    } else {
        printf("Parecer: ALERTA - Lote Reprovado (Abaixo do Fck de projeto).\n");
    }
    return 0;
}