#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float dinheiro_float = 21530000.25;
    double dinheiro_double = 21530000.25;
    printf("Valor original esperado: 21530000,25\n\n");
    printf("Com FLOAT ficou: %.2f\n",dinheiro_float);
    printf("Com DOUBLE ficou: %.2f\n",dinheiro_double);
    return 0;
    // 150,25
    // 15012345678 -> / 100.000.000
}