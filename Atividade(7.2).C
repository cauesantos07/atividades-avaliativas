(7.2)
// Defina um número secreto predeterminado.
// Peça para o usuário tentar adivinhar.
// O laço do while deve repetir até que o usuário acerte o número,
// informando uma mensagem de vitória ao final.

#include <stdio.h>

int main()
{
    int numeroSecreto = 42;
    int tentativa;

    do
    {
        printf("Digite seu palpite: ");
        scanf("%i", &tentativa);

        if (tentativa != numeroSecreto)
        {
            printf("Errou! Tente novamente.\n");
        }

    } while (tentativa != numeroSecreto);

    printf("Acertou! Parabens!\n");

    return 0;
}
