#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *rot13(char *s)
{
	int i, j;
	char og[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char en[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; og[j] != '\0'; j++)
		{
			if (s[i] == og[j])
			{
				s[i] = en[j];
				break;
			}
		}
	}
	return (s);
}

