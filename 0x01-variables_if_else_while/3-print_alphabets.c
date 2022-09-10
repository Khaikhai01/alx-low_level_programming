#include <stdio.h>

/**
* main - Entry point
*
* prints all a to z in lowercase and uppercase followed by new line
* Return: Always(Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar('\n');

	for (x = 'A'; x <= 'Z'; x++)
		putchar('\n');

	putchar('\n'); 

	return (0);
}
