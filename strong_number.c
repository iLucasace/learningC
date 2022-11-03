#include <stdio.h>

int fatorial(int N) {
    if(N == 0) {
        return 1;
    } else {
        return N * fatorial(N - 1);
    }
}

int main() {
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);

    int Q = N, resto, resultado = 0;
    while(Q != 0) {
        resto = Q % 10;
        resultado += fatorial(resto);
        Q /= 10;
    }
    
    if(resultado == N) {
        printf("%d é um número forte!\n", N);
    } else {
        printf("%d não é um número forte!\n", N);
    }
    return 0;
}