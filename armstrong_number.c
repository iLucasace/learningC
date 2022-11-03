#include <stdio.h>

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    int aux = n, cont1 = 0;

    while(aux != 0) {
        aux /= 10;
        cont1++;
    }

    int mul = 1, resto, cont2, resultado = 0;
    cont2 = cont1;
    aux = n;

    while(aux != 0) {
        resto = aux % 10;
        while(cont2 != 0) {
            mul *= resto;
            cont2--;
        }
        resultado += mul;
        cont2 = cont1;
        aux /= 10;
        mul = 1;
    }

    if(resultado == n) {
        printf("%d é um número de Armstrong!\n", n);
    } else {
        printf("%d não é um número de Armstrong!\n", n);
    }
    return 0;
}