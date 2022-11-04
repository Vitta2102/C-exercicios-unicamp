#include <stdio.h>
#include <math.h>
 
float soma(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);
float pot(float a, float b);

int main(){   
    float a, b;
    char operador;
    
    scanf("%f%c%f", &a, &operador, &b);

    switch(operador){
        case('+'):
        printf("%.3f\n", soma(a,b));
        break;

        case('-'):
        printf("%.3f\n", sub(a,b));
        break;

        case('*'):
        printf("%.3f\n", mult(a,b));
        break;

        case('/'):
        printf("%.3f\n", div(a,b));
        break;

        case('^'):
        printf("%.3f\n", pot(a,b));
        break;   
    }
    
    return 0;
}

float soma(float a, float b){
    return (a+b);   
}
float sub(float a, float b){
    return (a-b);   
}
float mult(float a, float b){
    return(a*b);
}
float div(float a, float b){
    return(a/b);
}
float pot(float a, float b){
    return(pow(a,b));
}