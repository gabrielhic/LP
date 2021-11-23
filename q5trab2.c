#include <stdio.h>
#include <math.h>
int main() 
{
	int  n, copia;
	int numeroDigitos = 0;
	int resultado = 0;
	int digito;
	printf("Digite um número: ");
	scanf("%d", &n);
	if(n>9999999999 || n<1) printf("\nValor Inválido!!!");
	else{
		copia = n;
		while (copia>0)
		{
			copia = copia/10;
			numeroDigitos++;
		}
		for(int i = numeroDigitos; i>0; i--){
			digito = n%10;
			resultado += digito*pow(10,i-1);
			n = n/10;
		}
		printf("%d", resultado);
	}
}