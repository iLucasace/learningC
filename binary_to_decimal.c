#include <stdio.h>

int main() {
    int binary, aux, decimal = 0, peso = 1;
    printf("Digite um número em binário: ");
    scanf("%d", &binary);

    while(binary != 0) {
        aux = binary % 10;
        decimal += (aux * peso);
        binary /= 10;
        peso *= 2;
    }

    printf("Decimal = %d\n", decimal);
    return 0;
}