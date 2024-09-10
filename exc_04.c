//4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
//triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
//lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja

#include <stdio.h>

int verifica_triangulo_retangulo(int a, int b, int c) {
    
    if (a > b && a > c) {
        if (a * a == b * b + c * c) {
            return 1; 
        }
    } else if (b > a && b > c) {
        if (b * b == a * a + c * c) {
            return 1; 
        }
    } else if (c > a && c > b) {
        if (c * c == a * a + b * b) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int lado1, lado2, lado3;
    
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    if (verifica_triangulo_retangulo(lado1, lado2, lado3)) {
        printf("O triângulo é retângulo.\n");
    } else {
        printf("O triângulo não é retângulo.\n");
    }

    return 0;
}

