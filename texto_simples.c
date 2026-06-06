/* ============================================================================
 * Nome do Arquivo: texto_simples.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 05/06/2026
 * Descrição:       Armazenando textos simples
 * Compilação:      gcc texto_simples.c -o texto_simples
 * ============================================================================ 
 * Escreva um programa em C que declare um array bidimensional de caracteres capaz
 *  de armazenar 3 nomes (onde cada nome pode ter no máximo 20 letras). Utilize um
 *  laço de repetição `for` e a função `scanf` para solicitar e ler os três nomes 
 * digitados pelo usuário. Por fim, crie um segundo laço para imprimir os nomes que
 * foram guardados no array.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char nomes[3][21];
    // \0
    int i;
    printf("--- Cadastro de Nomes Simples ---\n");
    for (i = 0; i < 1; i++)
    {
        printf("Digite o nome %dº nome: ", i+1);
        scanf("%20s", nomes[i]);
    }
    printf("\n--- Nomes Armazenados no Array ---\n");
    for (i = 0; i < 3; i++)
    {
        printf("Posição [%d]: %s\n",i+1,nomes[i]);
    }
        
    return 0;
}