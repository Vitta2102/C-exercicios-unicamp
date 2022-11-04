#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char drow[100];
    char comp[100];
    char pmoc [100];
    int size, x, y; // variáveis para tamanho e percorrer vetor

    fgets(word, 100, stdin);
    if(word[0] <= 90){
        word[0] += 32;
    }

    size = strlen(word) -2;

    for(x = size, y = 0; x >= 0; x--, y++){ //atribuição dos caracteres ao "vetor invertido" até que "x" esteja em 0.
        drow[y] = word[x];
    }
    for(x = 0, y = 0; x <= size; x++, y++){
        comp[x] = word[y];
    }
    for(x = 0, y= 0; x <= size; x++, y++){
        pmoc[x] = drow[y];
    }
    
    if(strcmp(comp, pmoc) == 0){
        printf("Esta palavra e um palindromo\n");
    }
    else{
        printf("Esta palavra nao e um palindromo\n");
    }
    
    return 0;
}
