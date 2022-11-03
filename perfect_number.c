#include <stdio.h>

int main() {
    int n, resto, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        resto = n % i;
        if(resto == 0) {
            soma += i;
        }
    }

    if(soma == n) {
        printf("%d é um número perfeito!\n", n);
    } else {
        printf("%d não é um número perfeito!\n", n);
    }
    return 0;
}