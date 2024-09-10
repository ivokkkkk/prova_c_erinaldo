//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos.

#include <stdio.h>

void verifica_aprovacao(float nota) {
    if (nota >= 7) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }
}

int main() {
    float nota;
    
    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);
    
    verifica_aprovacao(nota);

    return 0;
}


