#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*
*@s: string the function is executed on
*@accept: acceptable characters
*
*Return: length of acceptable string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i, j;
	int boolean;

	i = 0;
	counter = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		boolean = 1;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				boolean = 0;
				counter++;
				break;
			}
		}
		if (boolean == 1)
		{
			break;
		}
		i++;
	}
	return (counter);
}
