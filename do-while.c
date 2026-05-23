#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    float nota;
    printf("--- Sistema de Cadastro de Notas ---\n");
    do {
        printf("Digite a nota do aluno (0,0 até 10,0): ");
        scanf("%f",&nota);
        if (nota < 0.0 || nota > 10.0)
        {
            printf("ERRO: Nota inválida! Tente novamente.\n\n");
        }
        
    } while (nota < 0.0 || nota > 10.0);
    printf("\nSucesso! A nota %.1f foi registrada no sistema.\n",nota);
    return 0;
}