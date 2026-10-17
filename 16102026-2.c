#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main(void){
    setlocale(LC_ALL,"");
    char classe;
    printf("--- Catálogo Espectral de Harvard ---\n");
    printf("Digite a classe espectral da estrela (O, B, A, F, G, K, M): ");
    scanf("%c",&classe);
    // classe = toupper(classe);
    switch (classe)
    {
    // case 'o':
    case 'O':
        printf("Estrela Azul | Temp: > 30.000 K (Estrela supermassiva e quente).\n");
        break;
    // case 'g':
    case 'G':
        printf("Estrela Amarela | Temp: ~ 5.500 K a 6.000 K (Ex.: O nosso Sol).\n");
        break;
    // case 'm':
    case 'M':
        printf("Estrela Vermelha | Temp: < 3.500 K (Anãs vermelhas, muito comuns).\n");
        break;
    // case 'b':
    case 'B':
    // case 'a':
    case 'A':
    // case 'f':
    case 'F':
    // case 'k':
    case 'K':
        printf("Classe %c registrada no catálogo para análise posterior.\n",classe);
        break;
    default:
        printf("Erro: Classe espectral '%c' não reconhecida no sistema.\n",classe);
        break;
    }
    return 0;
}