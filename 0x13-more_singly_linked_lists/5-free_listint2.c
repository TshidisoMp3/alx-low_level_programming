#include "lists.h"

/**
* free_listint2 - frees singly linked list.
* @head: printed link list
*
* Return: 0.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmPor_node;

	if (head == NULL)
		return;

	while (*head)
	{
		tmPor_node = (*head)->next;
		free(*head);
		(*head) = tmPor_node;
	}
}
