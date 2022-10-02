#include "main.h"

/**
 *is_prime_number - function to state if integer is prime
 *@n: integer parameter
 *Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if ((n / n == 1) && (n / 1 == n) && (n - 1) / 2 == 0)
		return (1);
	else if ((n - 3) / 2 == 0)
		return (0);
	return (0);
		
}
