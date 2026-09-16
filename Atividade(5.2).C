
 (5.2)
// Calcule e exiba a soma de todos os números pares no intervalo
// de 1 a 100 utilizando a estrutura for.

#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            soma = soma + i;
        }
    }

    printf("A soma dos numeros pares e: %i", soma);

    
}

