#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float calcular_distancia(int x1, int x2, int y1, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(int argc, char *argv[])
{
	int x1,x2,y1,y2;
	float distancia;

	printf("Informe as coordenadas para o primeiro ponto: ");
	scanf("%d %d", &x1, &x2);
	printf("Informe as coordenadas para o segundo ponto: ");
	scanf("%d %d", &y1, &y2);

	distancia = calcular_distancia(x1, x2, y1, y2);

	printf("Distancia: %.4f", distancia);

	return EXIT_SUCCESS;
}
