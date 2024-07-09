#include <stdio.h>

int main() {
    float metros, centimetros, milimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    milimetros = metros * 1000;

    printf("%.2f metros equivalem a %.2f centimetros e %.2f milimetros.\n", metros, centimetros, milimetros);

    return 0;
}
