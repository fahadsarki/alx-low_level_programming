#include "main.h"

/**
 * _calloc -allocated memoria for nmeb elemn de zise bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position in array
 * Return: pointer void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *fahad;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	fahad = malloc(nmemb * size);
	if (fahad == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		fahad[i] = 0;

	return (fahad);

}
