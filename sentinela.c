#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numero;
    int soma = 0;
    printf("--- Somador Contínuo ---\n");
    printf("Digite um número inteiro (ou 0 para encerrar)");
    scanf("%d", &numero);
    while (numero != 0)
    {
        soma = soma + numero;
        scanf("%d", &numero);
    }
    printf("\nO laço foi encerrado!\n");
    printf("A soma total dos números digitados é: %d\n", soma);
    return 0;
    
}