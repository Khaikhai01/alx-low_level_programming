#include <stdio.h>

/**
* main - prints alphabets in reverse.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
