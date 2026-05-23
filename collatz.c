#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    /*
    Se pegarmos um número inteiro positivo e aplicar os regras 
    abaixo, repetidamente, ele vai se tornar 1.
    - Se o número for par, divide-se por 2
    - Se ele for ímpar, multiplica-se por 3 e soma-se 1
    */
   long long int numero;
   int passos = 0;
   printf("=== O Mistério da Conjectura de Collatz ===\n\n");
   do {
    printf("Digite um número inteiro positivo: ");
    scanf("%lld",&numero);
    if (numero <= 0)
    {
        printf("ERRO: O múmero tem que ser positivo!");
    }
    
   } while( numero <= 0);
   printf("\nCalculando a sequência para %lld...\n",numero);
   printf("%lld", numero);
   while(numero != 1){
        if(numero % 2 == 0){
            numero = numero /2;
        } else {
            numero = (numero * 3) + 1;
        }
        printf(" -> %lld", numero);
        passos++;
   }
   printf("\n\nFim da sequência!\n");
   printf("O algoritmo chegou ao número 1 em %d passo(s).\n",passos);
   return 0;
}