#include <stdio.h>

int main() {
    float peso, altura, imc;


    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("O IMC calculado e: %.2f\n", imc);


    if (imc < 18.5) {
        printf("Classificacao: MAGREZA\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificacao: NORMAL\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Classificacao: SOBREPESO\n");
    } else if (imc >= 30.0 && imc <= 39.9) {
        printf("Classificacao: OBESIDADE\n");
    } else {
        printf("Classificacao: OBESIDADE GRAVE\n");
    }

    return 0;
}
