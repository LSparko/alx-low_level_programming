#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to the address of the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mem, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	mem = cpy->next;
	cpy->next = mem->next;
	free(mem);
	return (1);
}
