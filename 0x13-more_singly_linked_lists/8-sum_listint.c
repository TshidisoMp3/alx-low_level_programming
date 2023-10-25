#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - sum of linked list
* @head: linked list print
*
* Return: answer of node, NULL.
*/

int sum_listint(listint_t *head)
{
	int usm = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		usm += head->n;
		head = head->next;
	}
return (usm);
}
