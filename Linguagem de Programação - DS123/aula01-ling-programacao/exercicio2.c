#include <stdio.h>

int main() {
    float num1;
    float num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    float soma = num1 + num2;
    float sub = num1 - num2;
    float mult = num1 * num2;
    float div = num1 / num2;

    printf("Resultados:");
    printf("\n%.2f + %.2f = %.2f", num1, num2, soma);
    printf("\n%.2f - %.2f = %.2f", num1, num2, sub);
    printf("\n%.2f x %.2f = %.2f", num1, num2, mult);
    printf("\n%.2f / %.2f = %.2f", num1, num2, div);

    return 0;
}