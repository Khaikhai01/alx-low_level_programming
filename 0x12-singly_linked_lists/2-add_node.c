#include "lists.h"

/**
 *@add_node: adds a new node at the beginning of a list
 *@head: head of node
 *@str: string node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	char *x;
	x = strdup(str);
	//size_t counter;
//	counter = 0;
	struct list_s *tmp;

	tmp =(struct list_s*)malloc(sizeof(struct list_s));

	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		tmp->str = x;
		tmp->next = *head;
		*head = tmp;
	}
//	counter++;

	//return ("[%u] %p\n", tmp->len, tmp);

	return (tmp);
}
