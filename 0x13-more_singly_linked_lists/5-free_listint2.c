#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list.
 *@head: head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *free_head;

	while (*head)
	{
		if (*head == NULL)
		{
			printf("(nil)");
		}
		else
		{
			free_head = *head;
			*head = (*head)->next;
			free(free_head);
		}
	}
	*head = 0;
}
