#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (fahad = i, sarki = nums
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int fahad = 0;
	int sarki;

	va_start(ap, n);
	for (; fahad < n; fahad++)
	{
		sarki = va_arg(ap, int);
		printf("%d", sarki);
		if (separator == NULL)
			continue;
		if (fahad < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
