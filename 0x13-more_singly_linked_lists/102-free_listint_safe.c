#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 *
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	return (count);
}

