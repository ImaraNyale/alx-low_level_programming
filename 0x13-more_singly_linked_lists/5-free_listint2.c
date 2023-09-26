#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	head = NULL;
}
