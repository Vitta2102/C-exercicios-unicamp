#include <stdio.h>

int main() {
    float num1, num2;
    char operador;

    scanf("%f%c%f", &num1, &operador, &num2);

    if(operador == '+'){
        printf("%.3f%c%.3f=%.3f\n", num1, operador, num2, num1+num2);
    }
    else if(operador == '-'){
        printf("%.3f%c%.3f=%.3f\n", num1, operador, num2, num1-num2);
    }
    else if(operador == '*'){
        printf("%.3f%c%.3f=%.3f\n", num1, operador, num2, num1*num2);
    }
    else if(operador == '/'){
        printf("%.3f%c%.3f=%.3f\n", num1, operador, num2, num1/num2);
    }
    else {
        printf("Operador invalido\n");
    }
    return 0; 
}
