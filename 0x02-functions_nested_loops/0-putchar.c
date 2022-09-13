#include <stdio.h>

/**
* main - prints _putchar followed by a new line.
*
* Return: Always 0 (success)
*/
int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		putchar(*word);
		word++;
	}
	putchar('\n');

	return 0;
}
