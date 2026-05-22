#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int idade;
    printf("Digite a idade do atleta: ");
    scanf("%d",&idade);
    printf("Categoria: ");
    switch (idade)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Não pode participar ainda.\n");
        break;
    case 5 ... 7:
        printf("Infantil A\n");
        break;
    case 8 ... 10:
        printf("Infantil B\n");
        break;
    case 11 ... 13:
        printf("Juvenil A\n");
        break;
    case 14 ... 17:
        printf("Juvenil B\n");
        break;
    default:
        printf("Adulto\n");
        break;
    }
    return 0;
}