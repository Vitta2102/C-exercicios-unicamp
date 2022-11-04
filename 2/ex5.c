#include <stdio.h>

int main() {
    int idade;
    float altura;
    char sx;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("digite o seu sexo: \n");
    scanf("%c", &sx);
    printf("digite a sua altura: \n");
    scanf("%f", &altura);
    

    
    printf("Voce tem %d anos, do sexo %c e %f de altura", idade, sx, altura);

    return 0;
}