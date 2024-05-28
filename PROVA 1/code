#include <stdio.h>

int main() {
    // Declarando vari�veis
    char desconto, cupom;
    float valorCompra, valorDesconto, valorFinal;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valorCompra);
    if (valorCompra <= 0) {
        printf("O valor da compra deve ser um numero decimal positivo");
        return 1;}

    printf("Digite o cupom a ser utilizado: ");
    scanf(" %c", &desconto);
    //recebendo o cupom a ser utilizado
    switch (desconto) {
        case 'A':
            cupom = 'A';
            valorDesconto = valorCompra * 0.1;
            valorFinal = valorCompra - valorDesconto;
            printf("O valor com desconto e: %.2f\n", valorFinal);
            break;
        case 'B':
            cupom = 'B';
            valorDesconto = valorCompra * 0.2;
            valorFinal = valorCompra - valorDesconto;
            printf("O valor com desconto e: %.2f\n", valorFinal);
            break;
        case 'C':
            cupom = 'C';
            valorDesconto = valorCompra * 0.3;
            valorFinal = valorCompra - valorDesconto;
            printf("O valor com desconto e: %.2f\n", valorFinal);
            break;
        case 'D':
            cupom = 'D';
            valorDesconto = valorCompra * 0.4;
            valorFinal = valorCompra - valorDesconto;
            printf("O valor com desconto e: %.2f\n", valorFinal);
            break;
        case 'E':
            cupom = 'E';
            valorDesconto = valorCompra * 0.5;
            valorFinal = valorCompra - valorDesconto;
            printf("O valor com desconto e: %.2f\n", valorFinal);
            break;
        default:
            printf("Cupom invalido!\n");
            return 1;
    }
    //Gerando nota fiscal
    printf("\n-----NOTA FISCAL-----\n");
    printf("Valor da compra: %.2f\n", valorCompra);
    printf("Valor do desconto foi de: %.2f\n", valorDesconto);
    printf("Cupom utilizado: %c\n", cupom);
    printf("Porcentagem de desconto: %.0f%%\n", valorDesconto / valorCompra * 100);
    printf("Valor final pago: %.2f\n", valorFinal);

    return 0;
}
