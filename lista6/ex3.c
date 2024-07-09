#include <stdio.h>

int main() {
    int hora;


    printf("Digite o horario atual (0-23): ");
    scanf("%d", &hora);

    if (hora >= 0 && hora <= 11) {
        printf("Bom dia amiguinho!!\n");
    } else if (hora >= 12 && hora <= 17) {
        printf("Boa tarde amiguinho!!\n");
    } else {
        printf("Boa noite amiguinho!!\n");
    }

    return 0;
}
