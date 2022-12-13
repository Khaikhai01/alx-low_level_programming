#include "main.h"
/**
*_strlen - counts lenght of string
*
*@s: pointer to string
*
*Return: string length
*/
int _strlen(char *s)
{
	int total, i;

	total = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		total++;
	}
	return (total);
}
