#include "main.h"

/**
 * prime_check - check if it's a prime number
 * @f: factor to check
 * @p: possible prime num
 * Return: 1 for prime, 0 not prime
 */
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - if prime
 * @n: num to check
 * Return: 1 prime, 0 not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
