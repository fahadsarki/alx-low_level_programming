#include "main.h"

/**
 * factorial -factorial of a given number
 * @n: the number
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
