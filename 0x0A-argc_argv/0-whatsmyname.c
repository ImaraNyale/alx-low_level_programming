#include "main.h"
#include <stdio.h>

/*
 * main - main function prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
