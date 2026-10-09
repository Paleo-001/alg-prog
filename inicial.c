#include <stdio.h>
// stdio => Standard Input Output => Biblioteca Padrão de Entrada e Saída

int main(void) {
    // Antes do nome da função, sempre informo o tipo de dado que ele devolve
    // Todo programa deve ter uma função main, mas pode ter quaisquer outras
    // Funções podem receber parâmetros. Eles ficam dentro de parênteses
    // Quando a função não recebe parâmetros, podemos deixar os parênteses vazios
    // Porém, se for a função main, nela preciso escrever void
    printf("Olá amigos da FTEC!\n\n");
    // Print vem de imprimir, que no caso é imprimir na thread_local
    // Quando uso Printf, estou me referindo ao Imprimir formatado
    // Os parâmetros do printf, também ficam entre parênteses
    // Nesse caso o parâmetro era o texto a ser escrito
    return 0;
    // Todas linhas terminam em ; Exceto importação de bibliotecas ou criação de função
}