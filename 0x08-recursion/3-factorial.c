#include "main.h"

/**
 *factorial - calculates factorial of a number
 *@n: number to return factorial from
 *Returns: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
