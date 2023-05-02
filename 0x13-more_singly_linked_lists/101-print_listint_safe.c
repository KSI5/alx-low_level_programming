#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - Prints a listint_t linked list, handling loops
 * @head: Pointer to the head node of the linked list
 *
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head, *check = head;

	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;

		node = node->next;
		if (node >= check)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		check = check->next;
	}

	return (count);
}

