#include <stdio.h>

    //(3.1)Leia um número e exiba se ele é par ou ímpar



int main()
{

int numero;

    printf("digite o número:");
    scanf("%d", &numero);
    
if (numero % 2 == 0)
    {
        printf("par");
    }
    
else 
    {
        printf("ímpar");
    }
    
    
    
}
