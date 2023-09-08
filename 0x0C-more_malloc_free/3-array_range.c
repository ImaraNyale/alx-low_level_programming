#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers.
 *@min: first value the array
 *@max: last value of the array
 *Return: str
 */

int *array_range(int min, int max)
{
	int *str;
	int t, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	str = malloc(sizeof(int) * size);

	if (str == NULL)
		return (NULL);

	for (t = 0; min <= max; t++)
		str[t] = min++;

	return (str);
}
