#include "main.h"
#include <string.h>

/**
 *_strpbrk - searchs a string for any of a set of bytes
 *@s: The null-terminated string to be scanned
 *@accept: The null-terminated string containing the characters to match.
 *
 *Return: a pointer to the byte in @s that matches one of
 *the bytes in @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	if (ptr != NULL)
    	{	
        	return (ptr);
	}
	else
    	{
        	return (NULL);
    	}
    	return (0);
}
