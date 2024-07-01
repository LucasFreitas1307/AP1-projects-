#include <stdio.h>
#include <string.h>


void removerEspacos(char* str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}


void substituirLetra(char* str, char original, char substituto)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == original)
        {
            str[i] = substituto;
        }
        i++;
    }
}

int main()
{
    char frase[1000];
    char letraOriginal, letraSubstituta;


    printf("Digite uma frase -> ");
    fgets(frase, sizeof(frase), stdin);


    size_t length = strlen(frase);
    if (length > 0 && frase[length - 1] == '\n')
    {
        frase[length - 1] = '\0';
    }


    removerEspacos(frase);


    printf("Digite a letra original a ser substituida -> ");
    scanf("%c", &letraOriginal);
    getchar();

    printf("Digite a letra substituta -> ");
    scanf("%c", &letraSubstituta);


    substituirLetra(frase, letraOriginal, letraSubstituta);


    printf("Frase modificada: %s\n", frase);

    return 0;
}
