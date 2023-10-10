CC = gcc
CFLAGS = -Wall -lm -g -o

main: main.c
	$(CC) $(CFLAGS) calcularDistancia.out main.c  
