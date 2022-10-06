#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if it fails
 * 98 if insufficient memory was available
*/
void *malloc_checked(unsigned int b)
{
	int *fahad;

	fahad = malloc(b);

	if (fahad == NULL)
		exit(98);

	return (fahad);
}
