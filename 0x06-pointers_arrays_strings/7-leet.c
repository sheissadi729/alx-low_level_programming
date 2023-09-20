#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *leet(char *s)
{
	int i, j;
	char og[] = "aAeEoOtTlL";
	char en[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; og[j] != '\0'; j++)
		{
			if (s[i] == og[j])
			{
				s[i] = en[j];
			}
		}
	}
	return (s);
}

