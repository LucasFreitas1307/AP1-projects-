#include <stdio.h>
 int main ()
 {
     float altura, peso, IMC;

printf("\ndigite a sua altura em metros");
scanf("%f",&altura);
printf("\nDigite seu peso");
scanf("%f", &peso);
IMC = peso / (altura*altura);
printf("seu imc:" "%f", IMC);

 }
