#include <stdio.h>
/**
 * main - entry point
 * description: hex
 * Return: 0 man
 */
int main(void)
{
	char a = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}

