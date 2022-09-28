#include "main.h"


/**
 *_strlen_recursion - function that returns the lenght of a string.
 *@s: string whose length is to be calculated
 *Return: the length of the string.
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
