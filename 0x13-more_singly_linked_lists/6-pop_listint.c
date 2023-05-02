#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list and return its data
 * @head: pointer to the head of the list
 *
 * Return: Data in the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
