#include <stdio.h>

/**
* main - prints base ten single digits.
*
* Return: Always(Success)
*/
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		printf("%d", digits);

	printf("\n");

	return (0);
}
