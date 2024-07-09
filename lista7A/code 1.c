#include <stdio.h>

int main() {
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("a) Calcular media de idade\n");
        printf("b) Imprimir sequencia de Fibonacci\n");
        printf("c) Verificar se um numero e primo\n");
        printf("Digite a opcao desejada (ou 'x' para sair): ");
        scanf(" %c", &opcao);

        switch(opcao) {
            case 'a': {
                int idade, soma_idades = 0, contador = 0;
                float media;

                printf("Digite as idades (digite uma idade negativa para parar):\n");
                do {
                    scanf("%d", &idade);
                    if(idade >= 0) {
                        soma_idades += idade;
                        contador++;
                    }
                } while(idade >= 0);

                if(contador > 0) {
                    media = (float)soma_idades / contador;
                    printf("A media de idade e: %.2f\n", media);
                } else {
                    printf("Nenhuma idade valida foi inserida.\n");
                }
                break;
            }
            case 'b': {
                int num, primeiro = 0, segundo = 1, proximo;

                printf("Digite um n�mero inteiro para imprimir a sequencia de Fibonacci: ");
                scanf("%d", &num);

                printf("Sequencia de Fibonacci ate %d:\n", num);
                printf("%d, %d, ", primeiro, segundo);

                proximo = primeiro + segundo;
                while(proximo <= num) {
                    printf("%d, ", proximo);
                    primeiro = segundo;
                    segundo = proximo;
                    proximo = primeiro + segundo;
                }
                printf("\n");
                break;
            }
            case 'c': {
                int num, i, eh_primo = 1;

                printf("Digite um n�mero inteiro para verificar se e primo: ");
                scanf("%d", &num);

                if(num <= 1) {
                    eh_primo = 0;
                } else {
                    for(i = 2; i <= num / 2; i++) {
                        if(num % i == 0) {
                            eh_primo = 0;
                            break;
                        }
                    }
                }

                if(eh_primo) {
                    printf("%d e um n�mero primo.\n", num);
                } else {
                    printf("%d nao e um numero primo.\n", num);
                }
                break;
            }
            case 'x':
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha novamente.\n");
        }
    } while(opcao != 'x');

    return 0;
}
