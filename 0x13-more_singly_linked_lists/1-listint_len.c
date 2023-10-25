#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - able to print all functions on a list.
* @h: printed linked list
*
* Return: the number of the nodes calcultaed
*/

size_t listint_len(const listint_t *h)
{
	size_t countss = 0;

	while (h != NULL)
	{
		++countss;
		h = h->next;
	}

return (countss);
}
