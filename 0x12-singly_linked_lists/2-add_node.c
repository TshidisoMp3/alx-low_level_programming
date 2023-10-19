#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *brandNew_node; /* Create a new node */
	unsigned int cd = 0;

	while (str[cd++])
		;

	brandNew_node = malloc(sizeof(list_t));
	if (brandNew_node == NULL)
		return (NULL);

	brandNew_node->str = strdup(str);
	brandNew_node->len = --cd;
	brandNew_node->next = (*head);
	(*head) = brandNew_node;	

	return (*head);
}