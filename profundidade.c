#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int numeroLido, numeroTemp;
    int contadorDigitos = 0;
    printf("--- Contador de Dígitos ---\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&numeroLido);
    if (numeroLido == 0)
    {
        contadorDigitos = 1;
    } else {
        numeroTemp = numeroLido;
        while(numeroTemp > 0){
            numeroTemp = numeroTemp / 10;
            contadorDigitos++;
        }
    }
    printf("\nO número %d possui %d dígito(s).\n",numeroLido,contadorDigitos);
    return 0;
    
}