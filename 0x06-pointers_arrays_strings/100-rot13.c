#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *str)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alphabet[i])
			{
				*(str + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
