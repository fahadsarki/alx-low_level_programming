#include "main.h"

/**
 * _strcpy - copy strings from source to
 * destination array
 * @dest: destination arr
 * @src: source arr
 * Return: Pointer to dest arr
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
