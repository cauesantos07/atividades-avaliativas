\\(1.1)Declare variáveis para armazenar o nome, idade, altura e se uma pessoa possui carteira de motorista (verdadeiro/falso).
Atribua valores a elas e exiba no console de forma formatada.
#include <stdio.h>
#include<stdbool.h>
int main()
{
    char nome [100];
    int idade;
    float Altura;
    bool CNH = false;
    char resposta;

    printf("Digite seu nome:");
    scanf("%s", &nome);
    printf("Nome: %s", nome);
    
    printf("\nDigite sua idade: ");
    scanf("%i", &idade);
    printf("Idade: %i", idade);
    
    
    printf("\nDigite sua Altura: ");
    scanf("%f", &Altura);
    printf("Altura: %.2f", Altura);
    
    printf("\nPossui CNH?");
    
    scanf(" %s", &resposta);
    
     printf("Voce tem cnh ?");
    scanf( " %s", &resposta);
    if(resposta == 'S'|| resposta =='s'){
        CNH = true;
        printf(" TRUE");
    }else if(resposta =='N'||resposta =='n'){
        CNH = false;
        printf("false");
    }else{
        printf("Entrada inválida");
    }

    
    
        
    


    


}
