#include "main.h"
/**
 * print_numbers - A function that prints numbers 0 to 9.
 */
void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
