#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reversed linked list
 * @head: points to the first node of linked list
 *
 * Return: pointer to the 1st node in the new list or failure
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *recet_list_head = NULL;
	listint_t *red_list_head = NULL;

	while (*head)
	{
		recet_list_head = (*head)->next;
		(*head)->next = red_list_head;
		red_list_head = *head;
		*head = recet_list_head;
	}

	*head = red_list_head;

	return (*head);
}
