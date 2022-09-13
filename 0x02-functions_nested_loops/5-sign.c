#include "main.h"
/**
 * print_sign - Sign of a number
 * @n: number
 * Return: 1(greater than zero) or 0(is zero)
 * Return: -1(less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{	putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
