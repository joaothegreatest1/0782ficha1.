#include <stdio.h>

int main (void){

float consumo;
float pagar_s_IVA;
float pagar_c_IVA;
float potencia = 5.42;
float preco_kWh = 0.16;

printf("Qual o valor consumido de eletrcidade em kWh?\n");
scanf("%f",&consumo);

pagar_s_IVA = potencia + consumo*preco_kWh;

pagar_c_IVA = pagar_s_IVA + (pagar_s_IVA / 18);

printf("Valor a pagar:\n%0.2f €\n",pagar_c_IVA);


















    return 0;
}