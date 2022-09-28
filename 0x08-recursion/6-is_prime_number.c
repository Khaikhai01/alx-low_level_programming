#include "main.h"

/**
 *is_prime_number - function to check for prime numbers
 *@n: integer parameter
 *Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int i, c = 0;

	for (i = 1; i <= n; i++)
		if (n % i == 0)
		{
			c++;
		}
	if (c == 2)
	{
		return (1);
	}
	else
		return (0);
}
