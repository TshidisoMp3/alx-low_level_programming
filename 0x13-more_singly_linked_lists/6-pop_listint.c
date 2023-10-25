#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - adds a new node at the beginning of a singly linked list.
* @head: printed linked list
*
* Return: new element address , or NULL for failure.
*/

int pop_listint(listint_t **head)
{
	listint_t *tmPor_node; /* Create a new node */
	int valsss = 0;

	if (*head == NULL)
		return (0);

	tmPor_node = *head;
	*head = tmPor_node->next;
	valsss = tmPor_node->n;
	free(tmPor_node);

	return (valsss);
}
