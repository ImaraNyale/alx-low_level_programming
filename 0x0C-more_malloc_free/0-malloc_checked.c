#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *@b: size of memory to be allocated
 *Return: ptr (Success)
 */
void *malloc_checked(unsigned int t)
{
	void *ptr = malloc(t);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
