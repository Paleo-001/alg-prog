/* ============================================================================
 * Nome do Arquivo: inventario.c
 * Autor:           Aulas de Algoritmos
 * Data de Criação: 26/06/2026
 * Descrição:       Gestão de Inventário (Veterinária)
 * Compilação:      gcc inventario.c -o inventario
 * ============================================================================ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
     Uma clínica veterinária precisa registrar o peso de 8 animais atendidos no dia.
     **Requisitos:**
1. Armazene os pesos em um vetor de `float`.
2. Utilize um laço `for` para a entrada de dados.
3. Utilize estruturas condicionais para classificar o porte de cada animal: "Pequeno" (peso <= 10kg), "Médio" (10 < peso <= 25kg) ou "Grande" (peso > 25kg).
4. Ao final, exiba quantos animais foram classificados em cada categoria.
    */
    float pesos[8];
    int i, p=0, m=0, g=0;
    for(i = 0; i < 8; i++){
        printf("Digite o peso do animal %d (kg): ", i + 1);
        scanf("%f", &pesos[i]);
        if(pesos[i] <= 10.0) p++;
        else if (pesos[i] <= 25.0) m++;
        else g++;
    }
    printf("\nResumo do dia:\n- Pequeno: %d\n- Médio: %d\n- Grande: %d\n", p, m, g);
    return 0;
}