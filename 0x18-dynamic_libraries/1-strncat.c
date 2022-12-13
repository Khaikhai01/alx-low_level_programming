#include "main.h"
/**
*_strncat - concatenate string
*
*@dest: string parameter
*
*@src: string parameter
*
*@n: number of bytes
*
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, counter;

	counter = 0;
	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}

	for (j = 0; counter < n && *(src + j) != '\0'; j++)
	{
		counter++;
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
