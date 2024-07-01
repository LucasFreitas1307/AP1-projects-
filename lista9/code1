#include <stdio.h>
#include <ctype.h>
#include <string.h>


int contarPalavras(char* str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace((unsigned char) *str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}


int contarCaracteres(char* str) {
    int count = 0;
    while (*str) {
        count++;
        str++;
    }
    return count;
}


void converterParaMaiusculas(char* str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}


void converterParaMinusculas(char* str) {
    while (*str) {
        *str = tolower((unsigned char) *str);
        str++;
    }
}

int main() {
    char frase[1000];


    printf("Digite uma frase -> ");
    fgets(frase, sizeof(frase), stdin);


    size_t length = strlen(frase);
    if (length > 0 && frase[length - 1] == '\n') {
        frase[length - 1] = '\0';
    }


    int numPalavras = contarPalavras(frase);


    int numCaracteres = contarCaracteres(frase);


    char fraseMaiuscula[1000];
    char fraseMinuscula[1000];
    strcpy(fraseMaiuscula, frase);
    strcpy(fraseMinuscula, frase);


    converterParaMaiusculas(fraseMaiuscula);
    converterParaMinusculas(fraseMinuscula);


    printf("Numero de palavras: %d\n", numPalavras);
    printf("Numero de caracteres: %d\n", numCaracteres);
    printf("Frase em maiusculas: %s\n", fraseMaiuscula);
    printf("Frase em minusculas: %s\n", fraseMinuscula);

    return 0;
}
