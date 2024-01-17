#include "main.h"
#include <stdio.h>

/**
 * main - function prints individual arguments
 * @argc: argumrnt count
 * @argv: argument vector
 * Return: Alwars 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	do {

		printf("%s\n", argv[i]);
		i++;
	} while (i < argc);
	return (0);
}

