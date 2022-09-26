#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonals
 * @a: pointer to array
 * @size: size of matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
