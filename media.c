#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    float varDolar;
    printf("Qual é a cotação do dólar americano, hoje? ");
    scanf("%f",&varDolar);
    printf("Então, hoje, US$ 1,000 equivalem a R$ %.2f\n",varDolar*1000);
}