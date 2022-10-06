#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fahad;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	fahad = malloc((size1 + n + 1) * sizeof(char));

	if (fahad == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		fahad[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		fahad[i] = s2[i - size1];
	}
	fahad[i] = '\0';

	return (fahad);
}
