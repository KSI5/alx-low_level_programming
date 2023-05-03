#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slowPtr, *fastPtr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowPtr = head->next;
	fastPtr = (head->next)->next;

	while (fastPtr)
	{
		if (slowPtr == fastPtr)
		{
			slowPtr = head;
			while (slowPtr != fastPtr)
			{
				nodes++;
				slowPtr = slowPtr->next;
				fastPtr = fastPtr->next;
			}

			slowPtr = slowPtr->next;
			while (slowPtr != fastPtr)
			{
				nodes++;
				slowPtr = slowPtr->next;
			}

			return (nodes);
		}

		slowPtr = slowPtr->next;
		fastPtr = (fastPtr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @listHead: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *listHead)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(listHead);

	if (nodes == 0)
	{
		for (; listHead != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)listHead, listHead->n);
			listHead = listHead->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)listHead, listHead->n);
			listHead = listHead->next;
		}

		printf("-> [%p] %d\n", (void *)listHead, listHead->n);
	}

	return (nodes);
}

