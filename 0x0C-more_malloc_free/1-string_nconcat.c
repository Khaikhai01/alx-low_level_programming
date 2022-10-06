#include "main.h"

/**
  * string_nconcat - concatenates n bytes of s2 to s1.
  * @s1: first string.
  * @s2: second string.
  * @n: number of bytes.
  *
  * Return: pointer to ptr NULL otherwise.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int str_length, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (str_length = 0; s1[str_length] != '\0'; str_length++)
		;

	while (s2[i] != '\0' && i < n)
	{
		str_length++;
		i++;
	}

	str = (char *)malloc((str_length + 1) * sizeof(char));

	if (str)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		str_length = i;

		for (i = 0; s2[i] != '\0' && i < n; i++)
		{
			str[str_length + i] = s2[i];
		}
		str[str_length + i] = '\0';

		return (str);
	}
	return (NULL);
}
