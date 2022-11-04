#include <stdio.h>

int cubo(int A[10], int B[10]){
    int i;
    
    for(i = 0; i < 10; i++){
        B[i] = A[i]*A[i]*A[i];
        return(B[i]);
    }
}

int main() {
    int A[10];
    int B[10];
    int i;

    for(i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++){
        printf("%d\n", cubo(A, B));
    }



    return 0;
}
