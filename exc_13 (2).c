//13. Crie um programa que simule uma calculadora simples. O programa deve
//permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
//multiplicação e divisão. O usuário deve informar a operação desejada e dois
//números. O programa deve realizar a operação selecionada e exibir o resultado.
//Caso a operação não seja reconhecida, o programa deve informar um erro. 


#include <stdio.h>

void calculadora() {
    char operacao;
    float num1, num2, resultado;

    // Solicita a operação desejada
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // Note o espaço antes de %c para consumir qualquer caractere de nova linha pendente

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Realiza a operação escolhida
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Erro: Operação não reconhecida.\n");
            break;
    }
}

int main() {
    calculadora();
    return 0;
}






