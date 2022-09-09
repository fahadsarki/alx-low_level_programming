#include <stdio.h>
/**
 * main - entry point
 * description: lower and upper case alphabets
 * Return: 0 man
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

