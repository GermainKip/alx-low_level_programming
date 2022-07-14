#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: pointer to the string member in the list
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwNode, *temp;
	unsigned int n;

	for (n = 0; str[n]; n++)
		;
	nwNode = malloc(sizeof(list_t));
	if (nwNode == NULL)
		return (NULL);

	nwNode->str = strdup(str);
	nwNode->len = n;
	nwNode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = nwNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nwNode;
	}

	return (*head);
}
