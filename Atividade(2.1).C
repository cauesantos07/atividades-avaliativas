\\(2.1)Escreva um programa que receba o preço unitário de um produto e a quantidade comprada. Calcule o valor total da compra. 
Em seguida, receba o valor pago pelo cliente e calcule o troco a ser devolvido.
#include <stdio.h>

int main()
{
   
float preco_unitario;
int quantidade;
float valorTotal;
float valorPago;
float troco;

printf("\nDigite o preço unitário da compra:");    
scanf("%f", &preco_unitario);
printf("\nO valor é: %.2", preco_unitario);
    
printf("\nDigite a quantidade de produtos da compra:");
scanf("%i", &quantidade);
printf("\na quantidadede produtos é : %i", quantidade);
    
valorTotal = quantidade * preco_unitario;    
printf("\nO valor Total da compra é : %2.f", valorTotal);    

printf("\nDigite o valor que você vai pagar : ");
scanf("%f",&valorPago);

troco = valorPago - valorTotal;

printf("\nO valor Total do Troco é : %.2f", troco);




}
