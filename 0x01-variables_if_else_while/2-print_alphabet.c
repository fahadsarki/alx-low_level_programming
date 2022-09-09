#include <stdio.h>
/**
 * main - Entry Point
 * Description: Print alphabets with char
 * Return: 0
*/
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
