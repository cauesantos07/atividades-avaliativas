\\ (1.2) Crie duas variáveis A = 5 e B = 10 Faça a troca dos valores entre elas de modo que A passe a valer 10 e B passe a valer 5.
#include <stdio.h>
#include<stdbool.h>
int main()

    int a= 5;
    int b= 10;
    int Temp; 
    
    printf("Antes da troca: a= %d, b= %d" a, b);
    
    temp = a;
    a = b;
    b = temp;
    printf("Depois da troca: a = %i,b=%i  " a,b);
