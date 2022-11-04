#include <stdio.h>
#include <string.h>

int main() {
    float IMC;
    typedef struct dados{
        float altura;
        float peso;
        char nome[30];
    } corpo;

    corpo user;

    scanf("%f %f %s", &user.altura, &user.peso, user.nome);

    IMC = (user.peso/(user.altura*user.altura));
    
    printf("%.3f\n", IMC);



    


    return 0;
}