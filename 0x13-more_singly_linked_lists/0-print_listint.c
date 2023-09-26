#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function prints the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: no. of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (list);
}
