#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		char b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
