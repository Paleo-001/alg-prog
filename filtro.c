/* ============================================================================
 * Nome do Arquivo: filtro.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 03/07/2026
 * Descrição:       Filtro de Pacotes de Rede
 * Compilação:      gcc filtro.c -o filtro
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*Um roteador recebe 10 pacotes de rede com tamanhos variáveis (em bytes). Pacotes maiores que 1500 bytes (MTU excedido) devem ser descartados. O sistema deve exibir quais pacotes foram bloqueados.*/
    int pacotes[10];
    int i;
    printf("---Firewall: Analisador de MTU ---\n");
    for(i=0;i<10;i++){
        printf("Tamanho do pacote %d (bytes): ",i+1);
        scanf("%d",&pacotes[i]);
    }
    printf("\n---Auditoria de Tráfego ---\n");
    for(i=0;i<10;i++){
        if(pacotes[i] > 1500){
            printf("Pacote %d (%d butes): BLOQUEADO (MTU excedido)\n",i+1,pacotes[i]);
        } else {
            printf("Pacote %d (%d bytes): PERMITIDO\n",i+1,pacotes[i]);
        }
    }

    return 0;
}