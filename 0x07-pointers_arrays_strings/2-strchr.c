#include "main.h"
/**
 * *_strchr -  locates a character in a string.
 * @s: pointer to the string
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c
 * NULL, if character not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
			break;
		}
	}
	return (s);
}
