#include <stdio.h>
#include "lists.h"

/**
* print_listint - this funtion is able to print all func in a list
* @h: this is a printed linked list
*
* Return: how many nodes are there
*/

size_t print_listint(const listint_t *h)
{
	size_t countss = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++countss;
		h = h->next;
	}

return (countss);
}
