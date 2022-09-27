#include "main.h"

/**
 *_strspn - gets length of a substring
 *@s: string to be scanned.
 *@accept: string containing the characters to match.
 *Return: number of characters in s which consist only of 
 *characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	while (*s)
	{
		if (*accept != *s)
		{
			s++;
		}
		else
			putchar(*accept);
	}
	if (*accept == '\0')
	{
		return (*s);

	}
	return (0);
}
