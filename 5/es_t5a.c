#include <stdio.h>

int main() {
    float notas[20];
    int i;
    float x = 0.0;
    float busca = 0.0;

    for (i=0; i<20; i++){
        scanf("%f", &x);
        notas[i] = x;
    }
    
    while (busca >= 0){
        scanf("%f", &busca);
        if (busca < 0){
            break;  
        }  
        for (i = 0; i <= 20 ; i++){
            if(busca == notas[i]){
                printf("existe\n");
                break;
            } else {
                if (i >=20){
                    printf("nao existe\n");
                }
            }

        }
        
    }

    return 0;
}