#include "main.h"
#include <stdio.h>
/**
*_atoi - converts string to integer
*
*@s: pointer to string
*
*Return: integer from string
*/
int _atoi(char *s)
{
	unsigned int num = 0, n, i;
	int sign = 1;

	for (n = 0; *(s + n) != '\0'; n++)
	{
	}

	for (i = 0; i < n; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		num = num * 10 + (s[i] - 48);

		else if (num > 0)
			break;

	}

	return (num * sign);
}
