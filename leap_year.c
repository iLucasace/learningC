#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0) {
        printf("%d é um ano bissexto!\n", ano);
    } else if(ano % 100 == 0) {
        printf("%d não é um ano bissexto!\n", ano);
    } else if(ano % 4 == 0) {
        printf("%d é um ano bissexto!\n", ano);
    }
    return 0;
}