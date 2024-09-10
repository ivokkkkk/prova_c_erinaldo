//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:
//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//●De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%
//Use a estrutura condicional aninhada para calcular o desconto corretamente


#include <stdio.h>

void calcula_inss(float salario) {
    float contribuicao = 0.0;

    if (salario <= 1320.00) {
        contribuicao = salario * 0.075;
    } else if (salario <= 2571.29) {
        contribuicao = 1320.00 * 0.075 + (salario - 1320.00) * 0.09;
    } else if (salario <= 3856.94) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salario - 2571.29) * 0.12;
    } else if (salario <= 7507.49) {
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salario - 3856.94) * 0.14;
    } else {
        // Caso o salário seja maior que o teto de contribuição, aplicar teto de contribuição
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
    }
    
    printf("O valor da contribuição ao INSS é R$ %.2f\n", contribuicao);
}

int main() {
    float salario;
    
    printf("Digite o valor do salário bruto: R$ ");
    scanf("%f", &salario);
    
    calcula_inss(salario);

    return 0;
}





