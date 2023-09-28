#include "main.h"
/**
 * _puts_recursion - prints a string, folowed by a new line
 * @s: pointer to the string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
