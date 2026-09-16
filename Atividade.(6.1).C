(6.1)
// Faça um programa que solicite uma senha ao usuário.
// Enquanto a senha digitada for incorreta (ex: diferente de "1234"),
// continue solicitando a senha e exibindo uma mensagem de alerta.

#include <stdio.h>

int main()
{
    int senha;

    printf("Digite a senha: ");
    scanf("%i", &senha);

    while (senha != 1234)
    {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%i", &senha);
    }

    printf("Senha correta!");

}
