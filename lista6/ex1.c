#include <stdio.h>

//oi bruna, prometo mandar no dia certo a proxima lista =)
int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite uma das operacoes matematicas (+, -, *, /) ");
    scanf(" %c", &operador);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero\n");
            }
            break;
        default:
            printf("Operador invalido\n");
    }

    return 0;
}

