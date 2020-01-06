#include <stdio.h>

int main (void){

int salario;
int aliment;
int desc;
int liq;

printf("Qual o seu salario?\n");
scanf("%d",&salario);


printf("Qual o valor do seu subsidio de alimentaçao?\n");
scanf("%d",&aliment);

printf("Qual o valor dos descontos?\n");
scanf("%d",&desc);

liq = salario + aliment - desc;

printf("Salario:\n%d\n",salario);

printf("Subsidio de alimentaçao:\n%d\n",aliment);

printf("Descontos:\n%d\n",desc);

printf("Salario liquido:\n%d\n", liq);


















    return 0;
}