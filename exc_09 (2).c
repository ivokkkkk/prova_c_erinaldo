//9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
//Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
//Utilize as alíquotas e deduções conforme a tabela abaixo:
//● Até R$ 2.112,00: Isento
//● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
//● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
//● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
//● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)


#include <stdio.h>

void calcula_irrf(float salario) {
    float imposto;

    if (salario <= 2112.00) {
        printf("Isento de imposto.\n");
    } else if (salario <= 2826.65) {
        imposto = salario * 0.075 - 158.40;
        printf("O valor do imposto a ser pago é R$ %.2f\n", imposto);
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15 - 370.40;
        printf("O valor do imposto a ser pago é R$ %.2f\n", imposto);
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225 - 651.73;
        printf("O valor do imposto a ser pago é R$ %.2f\n", imposto);
    } else {
        imposto = salario * 0.275 - 884.96;
        printf("O valor do imposto a ser pago é R$ %.2f\n", imposto);
    }
}

int main() {
    float salario;
    
    printf("Digite o valor do salário bruto: R$ ");
    scanf("%f", &salario);
    
    calcula_irrf(salario);

    return 0;
}




