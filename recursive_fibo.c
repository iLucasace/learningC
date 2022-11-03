#include <stdio.h>

int fibo(int N){
    if(N == 0) {
        return 0;
    } else if(N == 1 || N == 2) {
        return 1;
    } else {
        N = fibo(N - 1) + fibo(N - 2);
    }
}

int main() {
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);

    printf("Fibonacci = %d\n", fibo(N));
    return 0;
}