#include <stdio.h>

int main() {
    int linhas;
    printf("Quantas linhas deseja? ");
    scanf("%d", &linhas);

    printf("\n");
    int n = 1;
    for(int i = 0; i <= linhas; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}