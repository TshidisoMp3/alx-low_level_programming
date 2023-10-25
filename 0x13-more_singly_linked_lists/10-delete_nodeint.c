#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - remove any node linked list.
* @head: linked list print
* @index: index of the node that will be deleted
*
* Return: the node or NULL .
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int tip;
	listint_t *recet_node, *nodeNxt_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nodeNxt_node = (*head)->next;
		free(*head);
		*head = nodeNxt_node;
		return (1);
	}

	recet_node = *head;
	for (tip = 0; tip < index - 1; tip++)
	{
		if (recet_node->next == NULL)
			return (-1);
		recet_node = recet_node->next;
	}

	nodeNxt_node = recet_node->next;
	recet_node->next = nodeNxt_node->next;
	free(nodeNxt_node);

return (1);
}
