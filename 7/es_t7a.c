#include <stdio.h>
#include <string.h>

int main () {
    char word[81];
    int x, y;

    fgets(word, 81, stdin);

    x = strlen(word) -2;

    for(y = x; y >= 0; y--){
        printf("%c", word[y]);
    }
    printf("\n");

return 0;
}