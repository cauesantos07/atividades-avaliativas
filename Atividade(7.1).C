(7.1)
// Construa um menu interativo com as opções:
// (1) Ver Saldo, (2) Fazer Depósito, (3) Sair.
// O programa deve executar ao menos uma vez e continuar mostrando
// o menu até que o usuário escolha a opção 3.

#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 0, deposito;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1 - Ver Saldo\n");
        printf("2 - Fazer Deposito\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Saldo: R$ %.2f\n", saldo);
        }
        else if (opcao == 2)
        {
            printf("Digite o valor do deposito: ");
            scanf("%f", &deposito);

            saldo = saldo + deposito;

            printf("Deposito realizado!\n");
        }
        else if (opcao == 3)
        {
            printf("Saindo...\n");
        }
        else
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    
}
