#include <stdio.h>
\\(2.2)Crie um programa que determine se uma pessoa pode entrar em uma atração de parque de diversões. 
As regras requerem idade maior ou igual a 
12 anos E altura maior ou igual a 1.40m. Exiba um resultado booleano (true ou false).
#include<stdbool.h>
int main()
{
int idade;
float altura;
printf("Digite sua idade:");
scanf("%i", &idade);

printf("Digite sua altura:");
scanf("%f", &altura);

 if (idade >= 12 && altura >= 1.40)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}


