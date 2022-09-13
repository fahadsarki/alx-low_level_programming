#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: lowercase or uppercase
 * Return: 1(success) or 0(failure)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
