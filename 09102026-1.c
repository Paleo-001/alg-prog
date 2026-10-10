#include <stdio.h>
#include <locale.h>
// Importando a biblioteca de localização (idiomas)

int main(void){
    setlocale(LC_ALL,"");
    // Definindo o idioma para programa para ser o mesmo do sistema operacional
    // Se preferir, pode incluir a sigla do idioma entre as aspas

    int idade;
    double altura;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);
    /*
    int => %i ou %d
    float => %f
    double => %lf
    */
   printf("Sua idade é: %d anos\n", idade);
   printf("Sua altura é: %.2lf metros\n", altura);

    return 0;
}