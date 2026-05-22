#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int idade;
    printf("Digite a idade do atleta: ");
    scanf("%d",&idade);
    if (idade < 5)
    {
        printf("Não pode participar ainda.\n");
    } else {
            printf("Categoria: ");
            if(idade >= 5 && idade <= 7)
            {
                printf("Infantil A\n");
            } else if (idade <= 10)
            {
                printf("Infantil B\n");
            } else if (idade <= 13)
            {
                printf("Juvenil A\n");
            } else if (idade <= 17) {
                printf("Juvenil B\n");
            } else {
                printf("Adulto\n");
            }
    }
    return 0;
}