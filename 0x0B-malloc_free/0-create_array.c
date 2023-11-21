#include <stdlib.h>

/**
 *create_array - function creates a string
 *@size: string size
 *@c: char to assign
 *Return: NULL if fail/pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int u;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
		return (NULL);

	for (u = 0 ; u < size; u++)
		str[u] = c;
	return (str);
}

