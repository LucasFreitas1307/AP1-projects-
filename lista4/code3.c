#include <stdio.h>

int main() {
    float media, frequencia;


    printf("Digite a media final do aluno: ");
    scanf("%f", &media);
    printf("Digite a frequencia do aluno (em percentual): ");
    scanf("%f", &frequencia);

        if (media >= 7 && frequencia >= 75) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

    return 0;
}

