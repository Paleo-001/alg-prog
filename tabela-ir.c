#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    // Variáveis
    float salario, imposto = 0.0, aliquota_efetiva = 0.0;
    int tipo_trabalhador;
    // Entrada de Dados
    printf("Digite o salário do trabalhador: R$ ");
    scanf("%f",&salario);
    printf("\nSelecione o vínculo do trabalhador:\n");
    printf("1 - Autônomo\n");
    printf("2 - Empregado\n");
    printf("Opção: ");
    scanf("%d",&tipo_trabalhador);
    // Tabela progressiva do Imposto de Renda
    if (salario <= 2428.8) {
        imposto = 0.0;
    } else if (salario <= 2826.65)
    {
        imposto = (salario * 0.075) - 182.16;
    } else if (salario <= 3751.05)
    {
        imposto = (salario * 0.15) - 394.16;
    } else if (salario <= 4664.68)
    {
        imposto = (salario * 0.225) - 675.49;
    } else {
        imposto = (salario * 0.275) - 908.73;
    }       
    // Calcular alíquota efetiva
    if (imposto > 0 && salario > 0)
        {
            aliquota_efetiva = (imposto / salario) * 100;
        }    
    // Saída de resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Imposto de Renda devido: R$ %.2f\n",imposto);
    printf("Alíquota Efetiva: %.2f%%\n",aliquota_efetiva);
    // Lógica da regra do DARF
    if (tipo_trabalhador == 1)
    {
        /* Autônomo */
        if (imposto > 0 && imposto < 10)
        {
            printf("Aviso: DARF inferior a R$ 10,00.\nNão deve recolher o valor, mas sim, acumular para o mês seguinte.\n");
        } else if (imposto >= 10)
        {
            printf("Aviso: O trabalhador deve recolher um DARF de R$ %.2f.\n",imposto);
        } else {
            printf("Aviso: Trabalhador isento de IR.\n");
        }     
    } else if (tipo_trabalhador == 2)
    {
        /* Empregado */
        if (imposto > 0)
        {
            printf("Aviso: Desconto na fonte (folha de pagamento) de R$ %.2f deverá ser efetuado, independentemente do valor.\n",imposto);
        } else {
            printf("Aviso: Trabalhador isento de IR.\n");
        }
        
    } else
    {
        /* Digitou um número diferente de 1 ou 2 */
        printf("Erro: Opção de trabalhador inválida.\n");
    }
    return 0;
    
}