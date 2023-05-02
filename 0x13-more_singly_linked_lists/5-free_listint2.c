#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
    if (head == NULL)
        return;

    while (*head != NULL)
    {
        listint_t *temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    *head = NULL;
}

