#include <stdio.h>

int main() {
    char x;
    x = getchar();

    scanf("%c", &x);
    printf("%c", x+1);

    return 0;
}