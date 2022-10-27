#include "lists.h"

/**
 *free_listint - function that frees a listint_t list.
 *@head: head
 *
 */
void free_listint(listint_t *head)
{
	listint_t *victim;

	while (head)
	{
		victim = head;
		head = victim->next;
		free(victim);
	}
}
