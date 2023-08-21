#include <stdio.h>
#include <stdlib.h>
/**
 * main - gives product of two numbers
 * @argc: no. of arguments
 * @argv: array of arguments.
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
