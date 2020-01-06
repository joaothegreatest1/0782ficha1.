#include <stdio.h>

int main (void){

char nome[300];

float valores_test1;
float valores_test2;
float valores_test3;

float test1_peso = 0.25;
float test2_peso = 0.35;
float test3_peso = 0.40;

int test1;
int test2;
int test3;

int  media;



printf("Nome?\n");
scanf("%s",nome);

printf("Nota do 1º teste?\n");
scanf("%d",&test1);

printf("Nota do 2º teste?\n");
scanf("%d",&test2);

printf("Nota do 3º teste?\n");
scanf("%d",&test3);

valores_test1 = test1 * test1_peso;

valores_test2 = test2 * test2_peso;

valores_test3 = test3 * test3_peso;

media = (valores_test3 + valores_test2) + valores_test1;

printf(" média é: %d\n",media);






























return 0;
}































