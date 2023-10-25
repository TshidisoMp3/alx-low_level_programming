#include <string.h>
#include "lists.h"

/**
* free_listint - frees singly linked list.
* @head: printed linked list
*
* Return: 0.
*/

void free_listint(listint_t *head)
{
	listint_t *tmPor_node;

	while (head)
	{
		tmPor_node = head;
		head = head->next;
		free(tmPor_node);
	}
}
