#include <stdio.h>

int main(){

    printf("=== SISTEMA DE CALCULO DE MEDIA E APROVACAO (de 0 a 10.0) ===");
    float nota1;
    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    float nota2;
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    float nota3;
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    float nota4;
    printf("Digite a quarta nota do aluno: ");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4; 

    if (media >= 7.0) {
        printf("\nAluno foi APROVADO com media: %.1f", media);
    } else {
        printf("\nAluno foi REPROVADO com media: %.1f", media);
    }

    return 0;
}