#include <stdio.h>

int main () {
    
    int n, s, diff;
    int resp1 = 1;
    int resp2 = 1;
    int resp3 = 1;

    scanf("%d%d", &n, &s);
    diff = n-s;

    for( ; n > 1; n--){
        resp1 *= n;
    }
    for( ; s > 1; s--){
        resp2 *= s;
    }
    for ( ; diff > 1; diff--){
        resp3 *= diff;
    }

    printf("%d\n", resp1/(resp2*resp3));

return 0;
}