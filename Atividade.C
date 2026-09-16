#include <stdio.h>
   //(3.1) Leia um número e exiba se ele é par ou ímpar
int main()
{

int numero;

float nota;

    printf ("Digite a nota:");
    scanf ("%f",&nota);

if (nota >= 7)
{
    printf("Aprovado");
}
else if (nota >= 5 && nota <= 6.9)
{
    printf("Recuperação");
}
else
{
    printf("Reprovado");
}
}
