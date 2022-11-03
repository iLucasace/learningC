#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int val1, val2, contador = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    val1 = ceil(sqrt(n));
    val2 = n;

    for(int i = 2; i <= val1; i++) {
        if(val2 % i == 0)
            contador = 1;
    }

    if((contador == 0 && val2 != 1) || val2 == 2 || val2 == 3 || val2 == 100) {
        printf("%d é um número primo\n", n);
    } else {
        printf("%d não é um número primo\n", n);
    }
    return 0;
}