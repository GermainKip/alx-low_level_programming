#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *list_ptr = h;
	size_t in = 0;

	while (list_ptr != NULL)
	{
		in++;
		list_ptr = list_ptr->next;
	}

	return (in);
}
