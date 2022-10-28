#include "lists.h"

/**
 *free_list - function that frees a listint_t list.
 *@head: head
 *
 */
void free_list(list_t *head)
{
	list_t *fnode;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		fnode = head->next;
		free(head->str);
		free(head);
		head = fnode;
	}
	free(head->str);
	free(head);
}
