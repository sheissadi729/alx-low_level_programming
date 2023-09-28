#include "main.h"
/**
 * _puts_recursion - prints a string, folowed by a new line
 * @s: pointer to the string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
		_puts_recursion(s + i);
	else
		_putchar(10);
}
