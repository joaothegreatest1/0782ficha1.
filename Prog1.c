#include <stdio.h>

int main (void){

int receitas;

int despesas;

int saldo;


printf("Qual o valor que recebe mensalmente?\n");
scanf("%d",&receitas);


printf("Qual as suas despesas mensais?\n");
scanf("%d",&despesas);

saldo = receitas - despesas;

printf(" Valor para as receitas : %d\n",receitas);

printf(" Valor para as despesas : %d\n",despesas);

printf(" Saldo : %d\n",saldo);

return 0;









}