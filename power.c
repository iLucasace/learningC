#include <stdio.h>

int main() {
    int base, expoente, expo, potencia = 1;
    double potencia1 = 1.0;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    expo = expoente;
    if(expoente > 0) {
        while(expoente != 0) {
            potencia *= base;
            expoente--;
        }
        printf("%d elevado à %d é igual à %d\n", base, expo, potencia);
    } else {
        while(expoente != 0) {
            potencia1 *= (1.0 / base);
            expoente++;
        }
        printf("%d elevado à %d é igual à %.10f\n", base, expo, potencia1);
    }
    return 0;
}