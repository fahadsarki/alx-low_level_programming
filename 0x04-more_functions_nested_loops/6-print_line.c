#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times _ is printed
 * Return: not given
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
