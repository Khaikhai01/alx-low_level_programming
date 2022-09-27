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
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
