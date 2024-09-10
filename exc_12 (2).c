//12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
//do IPTU com base na tabela abaixo:
//● Até R$ 100.000,00: Alíquota de 1%
//● De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
//● De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
//● Acima de R$ 500.000,00: Alíquota de 2,5%
//Use a estrutura condicional aninhada para aplicar a alíquota corretamente.


#include <stdio.h>

void calcula_iptu(float valor_venal) {
    float iptu;

    if (valor_venal <= 100000.00) {
        iptu = valor_venal * 0.01; // Alíquota de 1%
    } else if (valor_venal <= 300000.00) {
        iptu = valor_venal * 0.015; // Alíquota de 1,5%
    } else if (valor_venal <= 500000.00) {
        iptu = valor_venal * 0.02; // Alíquota de 2%
    } else {
        iptu = valor_venal * 0.025; // Alíquota de 2,5%
    }
    
    printf("O valor do IPTU é R$ %.2f\n", iptu);
}

int main() {
    float valor_venal;
    
    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%f", &valor_venal);
    
    calcula_iptu(valor_venal);

    return 0;
}






