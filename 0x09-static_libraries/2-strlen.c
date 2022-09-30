#include "main.h"

/**
 * _strlen - function for length of string.
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
