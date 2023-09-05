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
	char *lin;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	lin = malloc(sizeof(char) * (i + 1));

	if (lin == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		lin[r] = str[r];
	return (lin);
}
