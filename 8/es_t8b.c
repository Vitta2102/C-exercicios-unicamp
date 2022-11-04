#include <stdio.h>
#include <math.h>

int main() { 
    int area_r1, area_r2;
    int a, b, c, d;
    typedef struct ret{
        int inferior[2];
        int superior[2];
    } Retangulo;

    Retangulo r1;
    Retangulo r2;

    scanf("%d %d", &r1.inferior[0], &r1.inferior[1]);
    scanf("%d %d", &r1.superior[0], &r1.superior[1]);
    scanf("%d %d", &r2.inferior[0], &r2.inferior[1]);
    scanf("%d %d", &r2.superior[0], &r2.superior[1]);

    a = (r1.inferior[0] - r1.superior[0]);
    b = (r1.inferior[1] - r1.superior[1]);
        area_r1 = a*b;
    c = (r2.inferior[0] - r2.superior[0]);
    d = (r2.inferior[1] - r2.superior[1]);
        area_r2 = c*d;
    
    if(area_r2 <= area_r1){
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

return 0;
}