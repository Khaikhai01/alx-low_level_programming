#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: pointer to pointer of list
 *@str: string member of new element
 *@Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t count;
	list_t *endNode, *temp;

	endNode = malloc(sizeof(list_t));

	if (endNode == NULL)
		return (NULL);

	endNode->str = strdup(str);

	for (count = 0; str[count]; count++)
	{}

	endNode->len = count;
	endNode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = endNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = endNode;
	}
	return (*head);
}
