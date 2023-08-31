#include "main.h"

/**
 *factorial - function returns factorial of an int
 *@n: integer to find factorial of
 *Return: factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
