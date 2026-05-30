#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    /*
    Crie um programa que declare um array capaz de armazenar 5 números inteiros. O programa deve usar um laço de repetição para solicitar ao usuário que digite a idade de 5 pessoas. Em seguida, percorra esse array e imprima na tela as idades digitadas. Utilize %i para os índices e %d para a leitura e escrita das idades.
    */
   int idades[5];
   printf("--- Cadastro de Idades ---");
   for (int i = 0; i < 5; i++)
   {
    printf("Digite a idade da pessoa %i: ",i+1);
    scanf("%d", &idades[i]);
   }
   printf("\nIdades cadastradas no sistema:\n");
   for(int i = 0; i < 5; i++){
    printf("Pessoa %i: %d anos\n",i+1,idades[i]);
   }
   return 0;
   
}