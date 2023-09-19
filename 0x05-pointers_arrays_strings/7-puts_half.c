#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int i;
	int j;
	int l = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		l += 1;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (((l -1) / 2) + 1); i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
