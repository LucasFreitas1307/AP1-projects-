#include <stdio.h>

int main() {
    int vetor[10];
    int Procurado, encontrado = 0;

    printf("Digite 10 numeros inteiros para que eu encontre um numero especifico:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("Digite o numero que devo procurar: ");
    scanf("%d", &Procurado);


    for (int i = 0; i < 10; i++) {
        if (vetor[i] == Procurado) {
            printf("Encontrei o numero %d na posicao %d. \n", Procurado, i);
            encontrado = 1;
            break;
        }
    }


    if (!encontrado) {
        printf("Nao encontrei o numero %d entre os numeros enviados\n", Procurado);
    }

    return 0;
}
