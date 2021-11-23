#include <stdio.h>
int main()
{
  int n,soma,d; 
  printf("Digite um numero inteiro positivo de tres digitos: ");
  scanf("%d", &n);
  printf("\n Numero dado = %d", n);
  soma = 0; 
  while (n > 0){
    d =  n % 10; 
    soma = soma + d;
    n = n / 10;  
  }
  printf("Soma dos digitos do numero = %d\n", soma);
  return 0;
}