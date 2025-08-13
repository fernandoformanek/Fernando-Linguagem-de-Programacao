#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char curso[50];
    printf("Digite seu nome ");
    scanf("%s", nome);
    printf("Digite sua idade ");
    scanf("%d", &idade);
    printf("Digite seu curso ");
    scanf("%s", curso);

    int ano_nascimento = 2025 - idade;
    printf("\nOla %s!\n Seja bem-vindo ao curso de %s, voce nasceu aproximadamente em %d.", nome, curso, ano_nascimento);
    return 0;
}