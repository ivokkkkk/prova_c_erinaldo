//15. Crie um programa que converta um valor monetário entre três moedas: real
//(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
//moeda de destino e o valor a ser convertido. As taxas de conversão são as
//seguintes:
//● 1 USD = 5.30 BRL
//● 1 EUR = 6.20 BRL
//● 1 BRL = 0.19 USD
//● 1 BRL = 0.16 EUR
//O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
//reconhecida, o programa deve exibir uma mensagem de erro.


#include <stdio.h>
#include <string.h>

void converte_moeda(const char* moeda_origem, const char* moeda_destino, float valor) {
    float valor_convertido;
    
    if (strcmp(moeda_origem, "BRL") == 0) {
        if (strcmp(moeda_destino, "USD") == 0) {
            valor_convertido = valor * 0.19; // 1 BRL = 0.19 USD
            printf("Valor convertido: %.2f USD\n", valor_convertido);
        } else if (strcmp(moeda_destino, "EUR") == 0) {
            valor_convertido = valor * 0.16; // 1 BRL = 0.16 EUR
            printf("Valor convertido: %.2f EUR\n", valor_convertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(moeda_origem, "USD") == 0) {
        if (strcmp(moeda_destino, "BRL") == 0) {
            valor_convertido = valor * 5.30; // 1 USD = 5.30 BRL
            printf("Valor convertido: %.2f BRL\n", valor_convertido);
        } else if (strcmp(moeda_destino, "EUR") == 0) {
            valor_convertido = valor * (0.19 * 0.16); // 1 USD = 0.19 EUR
            printf("Valor convertido: %.2f EUR\n", valor_convertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(moeda_origem, "EUR") == 0) {
        if (strcmp(moeda_destino, "BRL") == 0) {
            valor_convertido = valor * 6.20; // 1 EUR = 6.20 BRL
            printf("Valor convertido: %.2f BRL\n", valor_convertido);
        } else if (strcmp(moeda_destino, "USD") == 0) {
            valor_convertido = valor * (6.20 * 0.19); // 1 EUR = 0.19 USD
            printf("Valor convertido: %.2f USD\n", valor_convertido);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else {
        printf("Erro: Moeda de origem não reconhecida.\n");
    }
}

int main() {
    char moeda_origem[4], moeda_destino[4];
    float valor;

    // Solicita as informações ao usuário
    printf("Digite a moeda de origem (BRL, USD, EUR): ");
    scanf("%3s", moeda_origem);
    printf("Digite a moeda de destino (BRL, USD, EUR): ");
    scanf("%3s", moeda_destino);
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    converte_moeda(moeda_origem, moeda_destino, valor);

    return 0;
}








