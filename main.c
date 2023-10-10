#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float calcular_distancia(int x1, int x2, int y1, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(int argc, char *argv[])
{
	printf("%.2f", calcular_distancia(10, 20, 30, 40));

	return EXIT_SUCCESS;
}
