#include "main.h"
#include <stdlib.h>

/**
 *create_array - function prints a string
 *@size: string size
 *@c: char to assign
 *Return: NULL if fail/pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
		return (NULL);

	for (t = 0 ; t < size; t++)
		str[t] = c;
	return (str);
}
