#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = (temperatura_celsius * 9/5) + 32;

    printf("A temperatura em Fahrenheit e: %.2f\n", temperatura_fahrenheit);

    return 0;
}
