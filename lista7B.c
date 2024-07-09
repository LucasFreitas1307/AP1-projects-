#include <stdio.h>

void questao_a() {
    int numeros[5];
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Numeros pares:\n");
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
}

void questao_b() {
    int numeros[5];
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    int maior = numeros[0];
    int menor = numeros[0];
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
}

void questao_c() {
    int numero;
    printf("Digite um numero inteiro para ver a sua tabuada:\n");
    scanf("%d", &numero);
    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Imprima os numeros pares\n");
        printf("2. Imprima o maior e o menor numero\n");
        printf("3. Imprima a tabuada do numero selecionado\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                questao_a();
                break;
            case 2:
                questao_b();
                break;
            case 3:
                questao_c();
                break;
            case 0:
                printf("beijo e tchau...\n");
                break;
            default:
                printf("Opcao invalida! Ta vendo essa opção por acaso?\n");
        }
    } while (opcao != 0);

    return 0;
}
