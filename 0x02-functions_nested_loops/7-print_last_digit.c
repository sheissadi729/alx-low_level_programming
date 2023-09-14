#include "main.h"
/**
 * print_last_digit - A  function that prints the last digit of a number.
 * @c: the number we extract the last digit from
 * Return: last digit
 */
int print_last_digit(int c)
{
	int n = c % 10;
	int v = -n;

	if (n >= 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(v + '0');
		return (v);
	}
}
