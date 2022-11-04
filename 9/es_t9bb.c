#include <stdio.h>

int plusreal(int a, int c);
int plusimag(int b, int d);
int multreal(int a, int c);
int multimag(int b, int d);

int main() {
    int z, w;
    int z1, w1;
    int a, b, c, d;
    char o;

    scanf("%d %d %c %d %d", &z, &w, &o, &z1, &w1);
    
    if(o == '+'){
        printf("%d %c %di\n", plusreal(z,z1), o, plusimag(w,w1));
    }
    else if(o == '*'){
        a = (z*z1);
        b = (w*w1);
        c = (z*w1);
        d = (w*z1);
        printf("%d + %di\n", multreal(a,b), multimag(c,d));
    }

return 0;
}

int plusreal(int a, int c){
    return(a+c);
}
int plusimag(int b, int d){
    return(b+d);
}
int multreal(int a, int c){
    return(a-c);
}
int multimag(int b, int d){
    return(b+d);
}