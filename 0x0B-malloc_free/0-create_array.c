#include "main.h"

/**
 *create_array - creates an array of chars, and initializes 
 *it with a specific char.
 *@size: the size of the character
 *@c: character parameter
 *Return: return NULL if size = 0
 *else  returns a pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(c));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
