#include "lists.h"

/**
 * find_listint_loop - looks for the loop in a linked list
 * @head: linked list search
 *
 * Return: address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *steady = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (steady && quick && quick->next)
	{
		steady = steady->next;
		quick = quick->next->next;

		if (quick == steady)
		{
			steady = head;
			while (steady != quick)
			{
				steady = steady->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
