#include <stdio.h>
#include <math.h>

float volume_esfera(float raio){
    float vol;
    float a = 4, b = 3;
    float pi = 3.14159;
    float cubo;
    cubo = raio*raio*raio;
    vol = (a/b)*(pi * cubo);

    return vol;
}

int main(){   
    float r;

    scanf("%f", &r);
    volume_esfera(r);
    printf("%.2f\n", volume_esfera(r));

    return 0;
}