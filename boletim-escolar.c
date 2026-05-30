#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    /*
    Faça um programa que armazene 4 notas bimestrais de um aluno (utilize o tipo double) em um vetor. Em seguida, calcule a soma dessas notas e a média final do aluno. Na hora de exibir os resultados, as notas individuais devem aparecer com apenas uma casa decimal, enquanto a média final deve aparecer com duas casas decimais.
    */
   double notas[4];
   double soma = 0.0, media;
   printf("--- Leitura de Notas Acadêmicas ---\n");
   for (int i = 0; i < 4; i++)
   {
    printf("Digite a nota %i (ex.: 8,5): ", i + 1);
    scanf("%lf", &notas[i]);
    soma += notas[i];
   }
   media = soma / 4.0;
   printf("\n--- Boletim ---\n");
   for (int i = 0; i < 4; i++)
   {
    printf("Nota %i: %.1f\n",i+1,notas[i]);
   }
   printf("Média final: %.2f\n",media);
   return 0;
}