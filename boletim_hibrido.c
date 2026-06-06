/* ============================================================================
 * Nome do Arquivo: boletim_hibrido.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 05/06/2026
 * Descrição:       Obtenção de dados de boletim híbrido
 * Compilação:      gcc boletim_hibrido.c -o boletim_hibrido
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>
// A linha abaixo importa as funções de manipulação de textos
#include <string.h>

int main() {
    // Na linha abaixo defino o idioma como sendo o do Sistema Operacional
    setlocale(LC_ALL,"");
    char nomes[6][50];
    int notas[6];
    int i;
    FILE *arquivo;
    printf("--- FASE 1: Entrada Manual de Alunos ---\n");
    for(i = 0; i < 3; i++){
        printf("Digite o nome completo do %dº aluno: ", i + 1);
        fgets(nomes[i],50,stdin);
        nomes[i][strcspn(nomes[i],"\n")] = '\0';
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        getchar();
    }
    printf("\n--- FASE 2: Importando Notas do Sistema ---\n");
    arquivo = fopen("notas.csv","r");
    if(arquivo == NULL) {
        printf("Erro: O arquivo 'notas.csv' não foi encontrado.\n");
        return 1;
    }
    for(i = 3; i < 6; i++){
        fscanf(arquivo,"%49[^;];%d;", nomes[i], &notas[i]);
    }
    fclose(arquivo);
    printf("Notas importadas com sucesso.\n");

    printf("\n--- FASE 3: Relatório Final (Boletim) ---\n");
    for( i = 0; i < 6; i++) {
        printf("Aluno: %s | Nota: %d | Status: ", nomes[i],notas[i]);
        if(notas[i] >= 70) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    
    return 0;
}