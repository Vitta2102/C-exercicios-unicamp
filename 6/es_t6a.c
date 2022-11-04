#include <stdio.h>
#define LC 5

int main () {
    int matriz[LC][LC];
    int linha, coluna;
    int x, y;
    
    scanf("%d %d", &linha, &coluna);

    for(x = 0; x < linha; x++){
        for(y = 0; y < coluna; y++){
            scanf("%d", &matriz[x][y]);
        }
    }
    for(x = 0; x < coluna; x++){
        for(y = 0; y < linha; y++){
            printf("%d ", matriz[y][x]);        
    }
    printf("\n");
}

return 0;

}