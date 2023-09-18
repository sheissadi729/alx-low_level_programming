#include "main.h"
/**
 * _puts - prints a string in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int i;
	int j;
	int l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		l += 1;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[l - 1 - i]);
	}
	_putchar('\n');
}
