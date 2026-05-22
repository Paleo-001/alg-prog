#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    printf("Qual o valor que você deseja sacar?\nTemos apenas notas de R$ 10, R$ 20 ou R$ 50\n");
    int varValor,varNota10,varNota20,varNota50;
    scanf("%i",&varValor);
    if (varValor%10 !=0)
    {
        printf("Não dispomos de notas para realizar esse saque.\nTente outro valor");
    } else {
        varNota50 = varValor/50;
        varNota20 = (varValor%50)/20;
        varNota10 = ((varValor%50)%20)/10;
        printf("Você receberá %i notas de R$ 50, %i notas de R$ 20 e %i notas de R$ 10.\n",varNota50,varNota20,varNota10);
    }
}