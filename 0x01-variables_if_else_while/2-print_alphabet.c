#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all characters A-Z in lowercase
 * Return: Always(Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
