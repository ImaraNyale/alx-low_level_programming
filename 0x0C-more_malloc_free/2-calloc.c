#include "main.h"
#include<stdlib.h>
/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb:
 *@size:
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	char *fil;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);

	fil = str;

	for (index = 0; index < (size * nmemb); index++)
		fil[index] = '\0';

	return (str);
}
