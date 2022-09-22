#include "main.h"

/**
 * reverse_array - reverse content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, cup;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		cup = a[i];
		a[i] = a[j];
		a[j--] = cup;
	}
}
