#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: pointer to the head of the list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

