#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void){
    setlocale(LC_ALL,"");
    printf("Informe, em sequência, os 4 números inteiros com os quais deseja realizar as operações:\n");
    int varNum1, varNum2, varNum3, varNum4;
    float varResultado;
    scanf("%i %i %i %i",&varNum1,&varNum2,&varNum3,&varNum4);
    varResultado = (pow(varNum1,2)+pow(varNum2,2)+pow(varNum3,2)+pow(varNum4,2))/4;
    printf("Os números informados foram %i, %i, %i, %i, sendo que a média dos seus quadrados é %.2f\n",varNum1,varNum2,varNum3,varNum4,varResultado);

}