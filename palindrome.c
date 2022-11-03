#include <stdio.h>

int main() {
    int N, resto, resultado = 0, Q;
    printf("Digite um número: ");
    scanf("%d", &N);

    Q = N;
    while(Q != 0) {
        resto = Q % 10;
        resultado = (resultado * 10) + resto;
        Q = Q / 10;
    }
    
    if(Q == N) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo!\n");
    }
    return 0;
}