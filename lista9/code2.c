#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inverterString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}


int ehPalindromo(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char frase[1000];


    printf("Digite uma palavra: ");
    fgets(frase, sizeof(frase), stdin);


    size_t length = strlen(frase);
    if (length > 0 && frase[length - 1] == '\n') {
        frase[length - 1] = '\0';
    }


    char invertida[1000];
    strcpy(invertida, frase);
    inverterString(invertida);


    int palindromo = ehPalindromo(frase);


    printf("Palavra invertida: %s\n", invertida);
    if (palindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}
