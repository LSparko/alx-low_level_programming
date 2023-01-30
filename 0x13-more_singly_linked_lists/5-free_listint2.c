#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the address of the head of the list to be freed
 *
 * Description: The function sets the head to NULL
*/

void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (head == NULL)
		return;

	while (*head)
	{
		mem = *head->next;
		free(*head);

		*head = mem;
	}

	head = NULL;
}
