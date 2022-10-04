#include "main.h"
#include <string.h>

/**
 *_strdup -  function returns a pointer to a new string
 *which is a duplicate of the string str.
 *@str: string to be duplicated
 *Return: returns NULL if str = NULL
 *returns a pointer to the duplicated string on success.
 *returns NULL if insufficient memory.
 */

char *_strdup(char *str)
{
	int str_size;
	char *dup;
	char *dup_offset;

	/*Allocate memory for duplicate*/
	str_size = strlen(str);
	dup = (char *)malloc(sizeof(char) * str_size + 1);
	if (dup == NULL)
		return ((char *)NULL);

	/* copy string */
	dup_offset = dup;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return (dup);
}
