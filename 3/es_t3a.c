#include <stdio.h>

int main (){
    int numero;

    scanf("%d", &numero);
    if(numero %2 == 0) {
        printf("par\n");
    }
    else if(numero %2 != 0) {
        printf("impar\n");
    }

return 0;
}