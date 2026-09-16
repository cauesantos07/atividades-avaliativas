 (5.1)
// Solicite um número ao usuário e, utilizando o laço for,
// imprima a tabuada completa desse número (de 1 a 10).

#include <stdio.h>

int main()
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}
