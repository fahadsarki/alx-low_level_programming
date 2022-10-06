#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *fahad, i = 0, t = min;

	if (min > max)
		return (0);
	fahad = malloc((max - min + 1) * sizeof(int));

	if (!fahad)
		return (0);
	while (i <= max - min)
		fahad[i++] = t++;
	return (fahad);
}
