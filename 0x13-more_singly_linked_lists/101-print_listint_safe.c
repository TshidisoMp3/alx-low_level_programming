#include "lists.h"
#include <stdio.h>
#include "lists.h"

/**
 * check_looped_listint - function that checks loop
 * @head: points to the head of the listint_t to check.
 *
 * Return: 0 not looped, else the number of unique nodes in the list.
 */

size_t check_looped_listint(const listint_t *head)
{
	const listint_t *snail, *rat;
	size_t noded = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (snail == rat)
			break;
		snail = snail->next;
		rat = (rat->next)->next;
	}

	if (snail == rat)
	{
		snail = head;
		while (snail != rat)
		{
			noded++;
			snail = rat->next;
		snail = rat->next;
		}
		snail = rat->next;
		while (snail != rat)
		{
			noded++;
			snail = snail->next;
		}
		return (noded);
	}

return (0);
}

/**
 * print_listint_safe - Print of listint_t list safety.
 * @head: pointer of head of listint_t list.
 *
 * Return: number the nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t noded, index = 0;

	noded = check_looped_listint(head);

	if (noded == 0)
	{
		while (head != NULL)
		{
			noded++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < noded; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (noded);
}