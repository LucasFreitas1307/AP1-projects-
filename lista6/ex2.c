#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero inserido e positivo.\n");
    } else if (numero < 0) {
        printf("O nuumero inserido e negativo.\n");
    } else {
        printf("O numero inserido e zero.\n");
    }

    return 0;
}
