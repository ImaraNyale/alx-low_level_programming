#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a string
 * @ac: The number of arguments passed to the program
 * @av: An array of pointers to the arguments
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int args, bytes, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (args = 0; args < ac; args++)
	{
		for (bytes = 0; av[args][bytes]; bytes++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);
	index = 0;

	for (args = 0; args < ac; args++)
	{
		for (bytes = 0; av[args][bytes]; bytes++)
			string[index++] = av[args][bytes];

		string[index++] = '\n';
	}
	string[size] = '\0';
	return (string);
}
