#include <stdio.h>
int main() {
float vetor [5];
float soma;
float media;

    printf("Escreva 5 numero para receber a media entre eles");
for (int i = 0; i < 5; i++) {
     printf("\n numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
}
    media = soma/5;

printf("a media entre esses numero e %.2f\n", media);
return 0;
}
