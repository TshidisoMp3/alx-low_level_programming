#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brandNew_node, *tempoR_node;
	unsigned int cdo = 0;

	if (str == NULL)
		return (NULL);

	while (str[cdo++])
		;

	brandNew_node = malloc(sizeof(list_t));
	if (brandNew_node == NULL)
		return (NULL);

	brandNew_node->str = strdup(str);
	brandNew_node->len = --cdo;
	brandNew_node->next = NULL; /* Point it to null */

	/* if head is NULL, it is an empty list */
	if (*head == NULL)
	{
		(*head) = brandNew_node;
		return (brandNew_node);
	}

	tempoR_node = *head;
	while (tempoR_node->next)
		tempoR_node = tempoR_node->next;

	tempoR_node->next = brandNew_node;	/* Point head to new node */

	return (brandNew_node);
}