//8. Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
//pago.


#include <stdio.h>

void calcula_imposto(float salario) {
    float imposto;
    
    if (salario > 5000.00) {
        imposto = salario * 0.20; // Imposto de 20%
    } else {
        imposto = salario * 0.10; // Imposto de 10%
    }
    
    printf("O valor do imposto a ser pago é R$ %.2f\n", imposto);
}

int main() {
    float salario;
    
    printf("Digite o valor do salário: R$ ");
    scanf("%f", &salario);
    
    calcula_imposto(salario);

    return 0;
}




