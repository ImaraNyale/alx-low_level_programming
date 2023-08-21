#include <stdio.h>
#include "main.h"

/**
 * main - function prints program name
 * @argc: number of the arguments
 * @argv: array of the argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
