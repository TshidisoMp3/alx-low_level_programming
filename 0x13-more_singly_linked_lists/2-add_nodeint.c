#include <string.h>
#include "lists.h"

/**
* add_nodeint - function that adds a brandNew_node
* @head: printed linked list
* @n: added value to the noode
*
* Return:  address to new element, or NULL for faileure.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *brandNew_node; 

	brandNew_node = malloc(sizeof(listint_t));
	if (brandNew_node == NULL)
		return (NULL);

	brandNew_node->n = n;
	brandNew_node->next = (*head);
	(*head) = brandNew_node;

	return (*head);
}
