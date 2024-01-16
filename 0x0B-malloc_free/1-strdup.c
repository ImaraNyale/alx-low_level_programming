#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *len;
	int q, r = 0;

	if (str == NULL)
		return (NULL);

	q = 0;

	while (str[q] != '\0')
		q++;

	len = malloc(sizeof(char) * (q + 1));

	if (len == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		len[r] = str[r];
	return (len);
}
