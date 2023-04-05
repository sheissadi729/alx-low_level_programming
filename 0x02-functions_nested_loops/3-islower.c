#include "main.h"
/*
 * _islower - shows 1 or 0 depending on the input
 * @c: the char in ascii code
 * description - if the number is lowercase, prints 1, if not prints 0.
 */
int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
