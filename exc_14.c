//14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
//turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
//para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
//cada turno e um erro para entradas inválidas. 


#include <stdio.h>

void exibe_boas_vindas(int turno) {
    switch (turno) {
        case 1:
            printf("Bom dia! Seja bem-vindo(a)!\n");
            break;
        case 2:
            printf("Boa tarde! Seja bem-vindo(a)!\n");
            break;
        case 3:
            printf("Boa noite! Seja bem-vindo(a)!\n");
            break;
        default:
            printf("Erro: Turno inválido. Por favor, digite 1 para manhã, 2 para tarde ou 3 para noite.\n");
            break;
    }
}

int main() {
    int turno;

    // Solicita ao usuário o turno do dia
    printf("Digite o turno do dia (1 para manhã, 2 para tarde, 3 para noite): ");
    scanf("%d", &turno);

    exibe_boas_vindas(turno);

    return 0;
}







