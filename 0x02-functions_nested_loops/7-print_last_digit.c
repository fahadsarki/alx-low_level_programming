#include "main.h"
/**
 * print_last_digit - Prints the last digit of num
 * @r: a num
 * Return: Last digit of r
 */
int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
		last_digit = (r % 10) * -1;
	else
		last_digit = r % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
