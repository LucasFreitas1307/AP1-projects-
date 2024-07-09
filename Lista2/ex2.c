#include <stdio.h>

int main(){
float valorProduto, valorFinal, desconto, finalVal;
printf("insira o valor atual do produto");
scanf("%f", &valorProduto);
printf("digite o valor do desconto em decimal");
scanf("f", &desconto);
valorFinal = valorProduto * desconto;
finalVal = valorProduto - valorFinal;

}
