#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int opcao;
    do
    {
        printf("\n=== CAIXA ELETRÔNICO ===\n");
        printf("1 - Consultar Extrato\n");
        printf("2 - Sacar Dinheiro\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            printf("-> Seu saldo atual é de R$ 100,00.\n");
            break;
        case 2:
            printf("-> Por favor, retire o seu dinheiro no local indicado.\n");
            break;
        case 3:
            printf("-> Encerrando o sistema... Obrigado!\n");
            break;        
        default:
            printf("-> OPÇÃO INVÁLIDA! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);
    return 0;
}