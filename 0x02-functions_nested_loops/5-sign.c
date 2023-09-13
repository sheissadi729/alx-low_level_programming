#include "main.h"
/**
 * print_sign - A  function that prints the sign of a number.
 * @n: character to check
 * Return: 1 if n sign is positive, 0 if n is zero
 * and -1 if if n sign is negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
