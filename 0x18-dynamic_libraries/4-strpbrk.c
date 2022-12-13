#include "main.h"
/**
*_strpbrk - locates the first occurrence in the string s
*of any of the bytes in the string accept
*
*@s: string to search
*@accept: string to search in
*
*Return: pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int boolean, j;

	boolean = 1;
	while (*s)
	{
		j = 0;
		while (*(accept + j))
		{
			if (*s == *(accept + j))
			{
				boolean = 0;
				break;
			}
			j++;
		}
		if (boolean == 0)
		{
			break;
		}
		s++;
	}
	if (*s != '\0')
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
