#include <stdio.h>

int main() {
    int x, y, q;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    if(y > 0) {
        while(y != 0){
            x++;
            y--;
        }
    } else if(y < 0) {
        while(y != 0){
            x--;
            y++;
        }
    }

    printf("Soma = %d\n", x);
    return 0;
}