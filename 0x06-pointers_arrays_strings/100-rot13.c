#include "main.h"

/**
 * *rot13 - encodes a string to ROT13
 * @s: input string to be encoded
 * Return: string after encoding in ROT13
 */
char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == alphabet[j])
				s[i] = rot_13[j], j = 52;
	return (s);
}