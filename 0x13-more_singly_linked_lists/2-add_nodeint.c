#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 *               of a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @n: integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = *head;

	*head = nnode;

	return (nnode);
}
