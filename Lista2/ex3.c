#include <stdio.h>
int main(){
float valorReal, valorDolar, valorFinal;
printf("digite o valor em reais");
scanf("%f", &valorReal);
printf("digite a cotacao atual do dolar");
scanf("%f", &valorDolar);
valorFinal = valorReal * valorDolar;
printf ("o valor em dolar e %f", valorFinal);

}
