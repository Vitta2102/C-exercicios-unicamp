#include <stdio.h>

int main () {
    float p1, p2, t;

    printf("Digite as notas da P1, P2 e do Trabalho, nesta ordem: \n");
    scanf("%f%f%f", &p1, &p2, &t);
    printf("Media final: %f", (p1+p2+t)/3);
    
    return 0;
}