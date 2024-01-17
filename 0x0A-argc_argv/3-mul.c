#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates product of two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int o = 1;
	int res;

	(void)argv;

	if (argc < 3 || argc > 3)
		printf("Error\n");

	i = atoi(argv[1]);
	o = atoi(argv[2]);
	res = i * o;
	printf("%d\n", res);
	return (0);
}
