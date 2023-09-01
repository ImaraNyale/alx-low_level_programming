#include "main.h"
#include <stdio.h>

/**
 * main - prints individual arguments
 * @argc: argumrnt count
 * @argv: argument vector
 * Return: Alwars 0
 */
int main(int argc, char *argv[])
{
	int k = 0;
	(void)argc;

	do {

		printf("%s\n", argv[k]);
		k++;
	} while (k < argc);
	return (0);
}
