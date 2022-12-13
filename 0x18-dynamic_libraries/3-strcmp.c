#include "main.h"
/**
*_strcmp - compares two strings
*
*@s1: string parameter
*@s2: string parameter
*
*Return: difference between the strings
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2;)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
