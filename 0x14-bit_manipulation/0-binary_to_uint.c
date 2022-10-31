#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: pointing to a string of 0 and 1 chars
 *
 *Return: the converted number, or 0 if
 *	  there is one or more chars in the string b that is not 0 or 1
 *        b is NULL
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i=0;
	int c;
	unsigned int len;

	len = strlen(b);

	for (c = len-1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;

		}

		k *= 2;
	}

	return (i);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

        n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
