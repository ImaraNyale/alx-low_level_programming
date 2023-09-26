#include "lists.h"

/**
 * add_nodeint_end - function adds new node at the
 *                   end of a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @n: integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *last;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
		*head = nnode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = nnode;
	}

	return (*head);
}
