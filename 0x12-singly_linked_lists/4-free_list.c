#include "lists.h"

/**
 *free_list - function that frees a listint_t list.
 *@head: head
 *
 */
void free_list(list_t *head)
{
	list_t *fnode;

	while (head)
	{
		fnode = head;
		head = fnode->next;
		free(fnode);
	}
}
