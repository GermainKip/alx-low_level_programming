#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head of the linked list
 *
 */

void free_dlistinct(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
