#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    int opcao;
    do{
        printf("\n================================\n");
        printf("     PAINEL DO FORNO INDUSTRIAL   \n");
        printf("==================================\n");
        printf(" [1] Verificar Status da Caldeira\n");
        printf(" [2] Acionar Injeção de Vapor\n");
        printf(" [0] Desligar Equipamento\n");
        printf("==================================\n");
        printf("Escolha uma opção de operação: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("\n>>> STATUS: Temperatura estável em 220ºC. Resistências OK.\n");
                break;
            case 2:
                printf("\n>>> AÇÃO: Vapor injetado por 5 segundos. Crosta do pão umidificada.\n");
                break;
            case 0:
                printf("\n>>> Iniciando protocolo de resfriamento. Desligando...\n");
                break;
            default:
                printf("\n>>> ERRO: Comando não reconhecido pelo painel.\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}