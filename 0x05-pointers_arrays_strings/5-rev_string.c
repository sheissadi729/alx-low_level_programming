#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int i;
	int j;
	char ch;
	int l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		l += 1;
	}
	for (i = 0; i != l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
