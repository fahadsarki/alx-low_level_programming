#include "main.h"

/**
 * *string_toupper - converts string from lower to uppercase
 * @l: input string to be converted
 * Return: Resulting string
 */
char *string_toupper(char *l)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
			l[i] = l[i] - 32;
	}

	return (l);
}
