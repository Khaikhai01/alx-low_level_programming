#include "lists.h"

/**
 *@add_node: adds a new node at the beginning of a list
 *@head: head of node
 *@str: string node
 *
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *tmp;


	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		tmp->str = NULL;
		tmp->len = 0;
		tmp->next = *head;
		*head = tmp;
	}
	else
	{
		tmp->str = strdup(str);
		tmp->len = strlen(str);
		tmp->next = *head;
		*head = tmp;
	}


	return (tmp);
}
