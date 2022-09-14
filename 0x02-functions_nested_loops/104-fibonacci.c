#include <stdio.h>
#include "main.h"
/**
* main - Prints first 89 numbers of the fibonacci
* Return: 0
*/
int main(void)
{
	int i, l;
	unsigned int a, b, c;

	a = 1;
	b = 2;
	l = 89;

	for (i = 0; i < l; i++)
	{
		if (i == 87)
		{
			_putchar(a);
		} else
		{
			_putchar(a);
			_putchar(',');
			_putchar(' ');
			c = a + b;
			a = b;
			b = c;
		}
	}
	_putchar('\n');
	return (0);
}
