#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - find node on index.
* @head: printed linked list
* @index: index of node, the start of 0.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tip;

	if (head == NULL)
		return (NULL);

	for (tip = 0; tip < index; tip++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
return (head);
}
