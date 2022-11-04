#include <stdio.h>
#define TAM 100



int MaiorMenor(int valores[TAM]){

    return(valores[0]);
}

int main(){
    int N;
    int valores[TAM];
    int i, j, x;

    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%d", &valores[i]);
    }
    for(j = N; j > 0; j--){
        for(i = 0; i < j; i++){
            if(valores[i] > valores[i+1]){
            x = valores[i];
            valores[i] = valores[i+1];
            valores[i+1] = x;
            }
        }    
    }

    printf("maior valor: %d\n", valores[N]);
    printf("menor valor: %d\n", valores[0]);

    return 0;
}
