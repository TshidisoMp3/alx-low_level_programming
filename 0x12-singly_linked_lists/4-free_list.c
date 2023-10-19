#include <string.h>
#include "lists.h"

/**
* free_list - frees a singly linked list.
* @head: a linked list to print
*
* Return: void.
*/

void free_list(list_t *head)
{
	list_t *tempoR_node;

	while (head)
	{
		tempoR_node = head;
		head = head->next;
		free(tempoR_node->str);
		free(tempoR_node);
	}
}