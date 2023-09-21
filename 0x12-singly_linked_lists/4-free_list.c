#include "lists.h"
#include <stdlib.h>

/**
 * free_list - functiob frees a list_t list.
 * @head: the list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
