#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head of linked list
 * Return: number of nodes in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = head;
	const listint_t *temp;

	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		count++;
		temp = ptr;
		ptr = ptr->next;
		if (temp <= ptr)
		{
			printf("-> [%p] %d\n", (void *) ptr, ptr->n);
			break;
		}
	}
	return (count);
}

