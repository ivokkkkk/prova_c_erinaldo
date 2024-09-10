//7. Desenvolva uma função que receba um número inteiro e determine se ele é par
//ou ímpar. Exiba uma mensagem correspondente para cada caso.

#include <stdio.h>

void verifica_par_impar(int numero) {
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
}

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    verifica_par_impar(numero);

    return 0;
}



