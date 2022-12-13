#include "main.h"
/**
*_strcat - concatenates two strings
*
*@dest: string parameter
*
*@src: string parameter
*
*Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; *(dest + j) != '\0'; j++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
