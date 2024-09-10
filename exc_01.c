//1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
//for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
//por essa razão, limite a verificação a um conjunto pequeno de números para
//verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>

int verifica_primo(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7) {
        return 1; // Números primos entre 1 e 10
    }
    return 0; // Se não for primo, não retorna nada
}

int main() {
    int numero;
    
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numero);
    
    if (verifica_primo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
