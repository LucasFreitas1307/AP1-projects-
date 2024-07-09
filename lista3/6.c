#include <stdio.h>

int main() {
    float  num1, num2, num3, media ;
    printf("escreva um numero");
    scanf ("%f", &num1);
    printf("escreva um numero");
    scanf("%f", &num2);
    printf("escreva um numero");
    scanf("%f", &num3);
    media = (num1 + num2 + num3)/3;
    printf("media: e %f\\n", media);
    return 0 ;

}
