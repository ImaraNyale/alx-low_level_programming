#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 * Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elementsno = 0;

	while (h)
	{
		elementsno++;
		h = h->next;
	}

	return (elementsno);
}
