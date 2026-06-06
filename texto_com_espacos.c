/* ============================================================================
 * Nome do Arquivo: texto_com_espacos.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 05/06/2026
 * Descrição:       Texto com espaços
 * Compilação:      gcc texto_com_espacos.c -o texto_com_espacos
 * ============================================================================ 
 * Escreva um programa em C que declare uma matriz de caracteres capaz de armazenar
 *  os nomes completos de 3 pessoas (com espaço para até 49 letras cada). Como o `scanf`
 *  comum não lê espaços, utilize um laço de repetição `for` com a função `fgets` para
 *  receber os nomes do teclado.
 * scanf Lê e adiciona \0 ao final ->Ex.: Se digito Carlos, ele armazena Carlos\0
 * fgets(Onde_armazena,tamanho,De_onde_Lê) -> ele adiciona \n ao final */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL,"");
    char nomes[3][50];
    int i;
    for(i = 0; i < 3; i++) {
        printf("Digite o %dº nome completo: ", i + 1);
        fgets(nomes[i],50,stdin);
        nomes[i][strcspn(nomes[i],"\n")] = '\0'; // nomes[0][25] = '\0'; strcspn => String Complement Span
    }
    printf("\n--- Lista de Nomes Completos ---\n");
    for(i = 0; i < 3; i++){
        printf("Temos %s, na posição %d.\n",nomes[i],i);
    }
    
    return 0;
}