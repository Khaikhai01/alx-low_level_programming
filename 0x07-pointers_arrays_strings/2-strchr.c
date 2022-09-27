#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: c string.
 *@c: character to be located.
 *Return: a pointer to the first occurence oc c in s, if character
 *is not found, te function returns null pointer.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
