#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    int idade;
    double altura;
    char nome[50];
    printf("Informe o seu nome: ");
    // scanf("%s", &nome);
    fgets(nome, 50, stdin);
    nome[strcspn(nome,"\n")] = "\0";
    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    printf("Informe a sua altura: ");
    scanf("%lf", &altura);

    printf("Olá %s, que possui %d anos e uma altura de %.2lf metros!\n",nome,idade,altura);

    return 0;
}