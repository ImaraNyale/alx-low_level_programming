#include <stdlib.h>
/*
 * create_array - function creates string
 *@size: size of the string
 *@c: char to assign
 *Return: NULL iffail/pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int o;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
		return (NULL);
	for (o = 0 ; o < size; o++)
		str[o] = c;
	return (str);

}
