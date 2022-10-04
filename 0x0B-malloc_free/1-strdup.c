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
	int i = 1, j = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	newstr = (char *)malloc(i * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	while (j < i)
	{
		newstr[j] = str[j];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
	free(newstr);
}
