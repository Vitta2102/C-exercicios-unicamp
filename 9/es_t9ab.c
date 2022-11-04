#include <stdio.h>
#include <math.h>

float media(float n1, float n2, char xar){    
    float arit;
    float geo;
    float plus;
    float mult;

    switch(xar){
        case('A'):
            plus = n1 + n2;
            arit = (plus)/2;

        return arit;
        break;
    
        case('B'):
            mult = n1 * n2;
            geo = sqrt(mult);

        return geo;
        break;
    }

    return 0;
}

int main(){   
    float n1, n2; 
    char xar; 

    scanf("%c", &xar);
    scanf("%f %f", &n1 ,&n2);
    printf("%.3f\n", media(n1,n2,xar)); 

    return 0;
}