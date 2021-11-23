#include<stdio.h>
#include<stdlib.h>
int main(){  
  //declaração das variaveis
  int v=3, a[v], i, soma=0; 
  //entrada dos valores digitados
  for(i=0; i<v; i++){
    printf("Digite o  valor: ", i+1);
    scanf("\n%d", &a[i]);     
  }
  //calculo da soma
  for(i=0; i<v; i++){
    soma=soma+a[i];
      }
  //saida de dados
  for(i=0; i<v; i++){
    printf("\nA[%d] = %d", i+1, a[i]);

  }
    printf("\n\nSoma: %d\n\n", soma);
}
