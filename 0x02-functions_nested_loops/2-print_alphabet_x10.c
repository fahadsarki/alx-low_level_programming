#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		char b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
