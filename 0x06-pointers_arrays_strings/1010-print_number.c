#include "main.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int reversed = 0;
	unsigned int n1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	else
	{
		n = n;
	}
	n1 = n / 10;
	while (n1 > 0)
	{
		reversed = (reversed * 10) + (n1 % 10);
		n1 /= 10;
	}
	while (reversed > 0)
	{
		_putchar((reversed % 10) + '0');
		reversed /= 10;
	}
	_putchar((n % 10) + '0');
}
