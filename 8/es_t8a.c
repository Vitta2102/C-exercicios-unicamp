#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    typedef struct pontos{
        float coordenadas[2];
    } Ponto;

    Ponto c1;
    Ponto c2;

    scanf("%f %f", &c1.coordenadas[0], &c1.coordenadas[1]);    
      
    scanf("%f %f", &c2.coordenadas[0], &c2.coordenadas[1]);
        
    b = (c2.coordenadas[0] - c1.coordenadas[0]);    
    b *= b;
    c = (c2.coordenadas[1] - c1.coordenadas[1]);
    c *= c;
    a = sqrt(b+c);

    if(a < 0.0000001){
        printf("os pontos sao iguais\n");
    }
    else{
        printf("os pontos nao sao iguais\n");
    }

return 0;
}