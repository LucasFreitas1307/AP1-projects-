#include <stdio.h>
int main ()
{
    float numero1,numero2, divi, mult, soma, sub;
printf("digite um numero");
scanf("%f", &numero1);
printf("digite o segundo numero");
scanf("%f", &numero2);
//soma
soma = numero1 + numero2;
//divisao
divi = numero1/numero2;
// multiplica��o
mult = numero1 * numero2;
//subtra��o
sub = numero1 - numero2;
//resultado
printf("\n%f", soma);
printf("\n%f", divi);
printf("%\n%f", mult);
printf("\n%f", sub);
}
