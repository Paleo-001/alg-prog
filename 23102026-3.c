#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"");
    char categoria;
    int dias;
    double taxa_diaria = 0.0;
    printf("--- Tarifação Portuária de Armazenagem ---\n");
    printf("Categorias Disponíveis: [G] Geral | [R] Refrigerada | [P] Perigosa | [E] Excesso\n");
    printf("Digite a categoria do contêiner: ");
    scanf("%c", &categoria);
    switch (categoria)
    {
    case 'G':
    case 'g':
        taxa_diaria = 120.0;
        break;
    case 'R':
    case 'r':
        taxa_diaria = 250.0;
        break;
    case 'p':
    case 'P':
        taxa_diaria = 400.0;
        break;
    case 'E':
    case 'e':
        taxa_diaria = 320.0;
        break;
    default:
        printf("Erro: Categoria '%c' inválida.\n",categoria);
        return 1;
        break;
    }
    printf("Informe a quantidade de dias que ficará no pátio: ");
    scanf("%d", &dias);
    if(dias > 0){
        double total = taxa_diaria * dias;
        printf("Taxa diária aplicada: R$ %.2lf\n", taxa_diaria);
        printf("Valor total de armazenagem: R$ %'.2lf\n", total);
    } else {
        printf("Erro: Quantidade de dias inválida.\n");
    }
    return 0;
}