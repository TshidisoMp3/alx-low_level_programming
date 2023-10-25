#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node
* @head: printed linked list 
* @n: value added.
*
* Return: the address to new element or NULL for failure.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *brandNew_node, *tmPor_node;

	brandNew_node = malloc(sizeof(listint_t));
	if (brandNew_node == NULL)
		return (NULL);

	brandNew_node->n = n;
	brandNew_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = brandNew_node;
		return (brandNew_node);
	}

	tmPor_node = *head;
	while (tmPor_node->next)
		tmPor_node = tmPor_node->next;

	tmPor_node->next = brandNew_node;	/* Point head to new node */

	return (brandNew_node);
}
