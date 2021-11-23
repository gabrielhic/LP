#include <stdio.h>

int main() {
  int i, n;
  float x, y;

  printf("Digite o numero de pontos: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Digite as coordenadas de um ponto: ");
    scanf("%f %f", &x, &y);
    if (x >= 0 && y >= 0 && x*x + y*y <= 1)
      printf("O ponto (%f,%f) pertence a regiao.\n", x, y);
    else
      printf("O ponto (%f,%f) nao pertence a regiao.\n", x, y);
  }

  return 0;
}