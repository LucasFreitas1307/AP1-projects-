#include <stdio.h>
#include <string.h>
#include <ctype.h>


void removerVogais(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
              str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
              str[i] == 'O' || str[i] == 'U')) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}


int contarVogais(char* str) {
    int count = 0;
    int i = 0;
    while (str[i]) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char frase[1000];


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    size_t length = strlen(frase);
    if (length > 0 && frase[length - 1] == '\n') {
        frase[length - 1] = '\0';
    }


    removerVogais(frase);


    int numVogais = contarVogais(frase);


    printf("Frase sem vogais: %s\n", frase);
    printf("Numero de vogais removidas: %d\n", numVogais);

    return 0;
}
