#include "lists.h"

/**
 * check_looped_listfree - check loop of linked list
 * @head: pointer to head of the listint_t.
 *
 * Return: 0.
 */

size_t check_looped_listfree(listint_t *head)
{
	listint_t *dog, *cat;
	size_t noded = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dog = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (dog == cat)
			break;
		dog = dog->next;
		cat = (cat->next)->next;
	}

	if (dog == cat)
	{
		dog = head;
		while (dog != cat)
		{
			noded++;
			dog = dog->next;
			cat = cat->next;
		}
		dog = dog->next;
		while (dog != cat)
		{
			noded++;
			dog = dog->next;
		}
		return (noded);
	}
return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safety
 * @h: A pointer to the address 
 *
 * Return: The size of the list free
 *
 * Description: sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmPor;
	size_t noded, indxe;

	noded = check_looped_listfree(*h);
	if (noded == 0)
	{
		while (h != NULL && *h != NULL)
		{
			noded++;
			tmPor = (*h)->next;
			free(*h);
			*h = tmPor;
		}
	}

	else
	{
		for (indxe = 0; indxe < noded; indxe++)
		{
			tmPor = (*h)->next;
			free(*h);
			*h = tmPor;
		}
		*h = NULL;
	}

	h = NULL;
	return (noded);
}
