//4.1// Escreva um programa que receba um número de 1 a 7 e imprima o dia da semana 
#include <stdio.h>
int main()
{
int dia;

printf("Digite o número que corresponda ao dia da semana: ");
scanf("%d", &dia);

switch (dia)
{
    case 1:
    printf("Domingo");
    break;

case 2:

    printf("Segunda-feira");
    break;
    
case 3:

printf("Terça-feira");
    break;

case 4:

    printf("Quarta-feira");
    break;

case 5:

    printf("Quinta-feira");
    break;

case 6:

    printf("Sexta-feira");
    break;

case 7:

    printf("sábado");
    break;

default: 

    printf("Número inválido!");
}
}


