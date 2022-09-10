#include <stdio.h>

/**
* main - prints numbers of base 16 in lowercase.
*
* Return: Always 0 (success)
*/
int main(void)
{
	char hexa;

	for (hexa = 48; hexa < 58; hexa++)
		putchar(hexa);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);

	putchar('\n');

	return (0);
}
