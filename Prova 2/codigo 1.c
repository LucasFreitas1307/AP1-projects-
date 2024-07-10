#include <stdio.h>
#include <string.h>

// Armazenamento de dados de cada aluno
typedef struct {
    char nome[100];
    int matricula;
    float notas[3];
    float media;
} Aluno;

// Média de notas
float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    for(int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}
//Execução da função principall
int main() {
    Aluno alunos[3];

    for(int i = 0; i < 3; i++) {
        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;

        printf("Informe a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Informe as 3 notas do aluno %d:\n", i + 1);
        for(int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

// cálculo de médias
        alunos[i].media = calcularMedia(alunos[i].notas, 3);

        while (getchar() != '\n');
    }

// printando as info de cada aluno
    for(int i = 0; i < 3; i++) {
        printf("\nInformacoes do aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("Media final: %.2f\n", alunos[i].media);
    if (alunos[i].media >= 6.0) {
        printf("Situacao: Aprovado\n");
    }
    else {
        printf("Situacao: Reprovado\n");
    }
    }

    return 0;
}
