#include "main.h"
/**
*_strchr - function that locates a character in a string
*
*@s: string to search in
*@c:character to search for
*
*Return: string
*/
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			s = '\0';
			break;
		}
		s++;
	}
	return (s);
}
