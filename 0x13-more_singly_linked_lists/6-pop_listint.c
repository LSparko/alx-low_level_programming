#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the address of the head of the list
 *
 * Return: 0 if the link is empty, otherwise,
 * The head node's data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *mem;
	int ret;

	if (*head == NULL)
		return (0);

	mem = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(mem);

	return (ret);
}
