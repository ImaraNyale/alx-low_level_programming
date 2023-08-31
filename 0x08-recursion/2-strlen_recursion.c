#include "main.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: string to count its length
 * Retun: length of string
 */
int _strlen_recursion(char *s)
{
	int strl = 0;

	if (*s)
	{
		strl++;
		strl += _strlen_recursion(s + 1);
	}

	return (strl);

}
