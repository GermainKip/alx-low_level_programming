#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *wmd;

	temp = NULL;
	wmd = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = wmd;
		wmd = *head;
		*head = temp;
	}
	*head = wmd;
	return (*head);
}
