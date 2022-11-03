#include <stdio.h>

int reverse(int N) {
    if(N == 0) {
        return N;
    } else{
        printf("%d", N % 10);
    }
        return reverse(N / 10);
}

int main(){
    int N;
    scanf("%d", &N);

    reverse(N);
    printf("\n");
    return 0;
}