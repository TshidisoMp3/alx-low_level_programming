#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert new node at the nth node of a linked list.
* @head: linked list print
* @idx: the position node.
* @n: 0.
*
* Return: the nth node, NULL otherwise.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tip;
	listint_t *brandNew_node, *tmPor_node;

	if (head == NULL && idx != 0)
		return (NULL);

	brandNew_node = malloc(sizeof(listint_t));
	if (brandNew_node == NULL)
		return (NULL);

	brandNew_node->n = n;
	if (idx == 0)
	{
		brandNew_node->next = *head;
		*head = brandNew_node;
		return (brandNew_node);
	}

	tmPor_node = *head;
	for (tip = 0; tip < idx - 1; tip++)
	{
		tmPor_node = tmPor_node->next;
		if (tmPor_node == NULL)
			return (NULL);
	}

	brandNew_node->next = tmPor_node->next;
	tmPor_node->next = brandNew_node;

return (brandNew_node);
}
