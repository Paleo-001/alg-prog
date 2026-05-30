#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    /*
    Um pequeno mercado precisa cadastrar o nome e o preço de 5 produtos do seu estoque. Sabendo que em C não podemos misturar textos e números decimais na mesma estrutura de dados nativa, crie um programa que utilize "arrays paralelos".
- Use um array bidimensional de caracteres (char) para armazenar os 5 nomes (com até 49 letras cada).
- Use um array unidimensional do tipo double para armazenar os 5 preços.
- No final, utilize um laço de repetição para exibir um relatório alinhado com o nome de cada produto e seu respectivo preço.
    */
   char nomes[5][50];
   double precos[5];
   printf("--- Sistema de Cadastro de Estoque ---\n");
   for (int i = 0; i < 5; i++)
   {
    printf("\nCadastro do Produto %i:\n",i+1);
    printf("Digite o nome (sem espaços): ");
    scanf("%s", nomes[i]);
    printf("Digite o preço: R$ ");
    scanf("%lf", &precos[i]);
   }
   printf("\n--- Relatório de Produtos Cadastrados ---\n");
   for (int i = 0; i < 5; i++)
   {
    printf("Produto: %-59s | Preço: R$ %'15.2f\n", nomes[i], precos[i]);
   }
   return 0; 
}