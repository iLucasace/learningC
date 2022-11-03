#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N;
    printf("Quantas linhas deseja na sua pirâmide? ");
    scanf("%d", &N);
    printf("\n");
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= 2 * N - 1; j++) {
            if(j >= N - (i - 1) && j <= N + (i - 1)){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}