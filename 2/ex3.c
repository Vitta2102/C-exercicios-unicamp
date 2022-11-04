#include <stdio.h>

int main () {
    float C;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);
    printf("Temperatura em Farenheit: %.2f\n", (C*1.8)+32);


    return 0;
}