#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
