#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    /*
    Elabore um programa que solicite ao usuário o nome de um produto (com no máximo 49 caracteres, sem espaços) e o seu preço (do tipo float). Armazene o nome em um vetor de caracteres e exiba um resumo formatado com os dados coletados.
    */
   char nomeProduto[50];
   float preco;
   printf("-- Cadastro de Produto ---\n");
   printf("Digite o nome do produto (sem espaços): ");
   scanf("%s", nomeProduto);
   printf("Digite o preço do produto: R$ ");
   scanf("%f", &preco);
   printf("\n--- Resumo da operação ---\n");
   printf("Produto: %s\n",nomeProduto);
   printf("Preço final: R$ %.2f\n",preco);
   return 0;
}