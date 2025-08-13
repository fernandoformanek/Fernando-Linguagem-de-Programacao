#include <stdio.h>

int main() {
    float temp_cel;
    printf("Digite uma temperatura em Celcius (converter para Fahrenheit) ");
    scanf("%f", &temp_cel);
    float temp_fah = (temp_cel * 9/5) + 32;

    float dist_m;
    printf("\nDigite uma distancia em metros (converter para quilometros) ");
    scanf("%f", &dist_m);
    float dist_km = dist_m /1000;

    float peso_kg;
    printf("\nDigite um peso em quilos (converter para libras) ");
    scanf("%f", &peso_kg);
    float peso_lib = peso_kg * 2.2046;

    printf("\nSua temperatura em Fahrenheit: %.2f", temp_fah);
    printf("\nSua distancia em quilometros: %.2f", dist_km);
    printf("\nSeu peso em libras: %.2f", peso_lib);
    return 0;
}