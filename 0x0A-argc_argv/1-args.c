#include <stdio.h>

/**
 * main - program prints number of arguments
 * @argc: stores argumrnt count
 * @argv: stores argument vector
 * Retun: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
