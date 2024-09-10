//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
//de ICMS com base nas faixas de preço do produto:
//● Até R$ 1.000,00: Desconto de 5%
//● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
//● Acima de R$ 5.000,00: Desconto de 15%
//Use a estrutura condicional aninhada para aplicar o desconto corretamente.


#include <stdio.h>

void calcula_desconto_icms(float valor) {
    float desconto;

    if (valor <= 1000.00) {
        desconto = valor * 0.05; // Desconto de 5%
    } else if (valor <= 5000.00) {
        desconto = valor * 0.10; // Desconto de 10%
    } else {
        desconto = valor * 0.15; // Desconto de 15%
    }
    
    printf("O valor do desconto de ICMS é R$ %.2f\n", desconto);
}

int main() {
    float valor;
    
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    
    calcula_desconto_icms(valor);

    return 0;
}





