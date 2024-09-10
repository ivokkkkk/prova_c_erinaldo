//3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
//retornar 1. Caso contrário, não deve retornar nada.


#include <stdio.h>

int verifica_triangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1; // Triângulo válido
    }
    return 0; // Não retorna nada se não for triângulo
}

int main() {
    int lado1, lado2, lado3;
    
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    if (verifica_triangulo(lado1, lado2, lado3)) {
        printf("Os lados formam um triângulo válido.\n");
    } else {
        printf("Os lados não formam um triângulo válido.\n");
    }

    return 0;
}

