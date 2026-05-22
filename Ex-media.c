#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("--- Teste de Ambiente (Linguagem C) ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\nA media final e: %.2f", media);

    if (media >= 7) {
        printf("\nResultado: Aprovado! Compilador GCC OK.\n");
    } else {
        printf("\nResultado: Reprovado, mas o codigo funcionou!\n");
    }

    return 0;
}