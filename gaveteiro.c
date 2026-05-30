#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int gavetas[3] = {10,20,30};
    int *etiqueta;

    etiqueta = gavetas;

    printf("--- Teste de Acesso ---\n");
    printf("Valor via Array: %d\n", gavetas[0]);
    printf("Valor via Ponteiro: %d\n", *etiqueta);
    printf("Posição de memória via Ponteiro %p\n\n", etiqueta);

    printf("--- Movendo o Ponteiro ---\n");
    etiqueta = &gavetas[1];
    printf("Novo valor apontado pela etiqueta: %d\n", *etiqueta);

    printf("Tamanho do array: %d\n", sizeof(gavetas) / sizeof(gavetas[0]));
    int count = sizeof(gavetas) / sizeof(gavetas[0]);
    printf("Valores do Array, por posição:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Posição %d: %d (Na memória em %p)\n",i,gavetas[i],etiqueta + i);
    }
    
    return 0;
}