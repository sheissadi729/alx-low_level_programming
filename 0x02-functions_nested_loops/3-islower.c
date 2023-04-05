#include "main.h"
/*
 * _islower - shows 1 if the input is a
 * lowercase char, otherwise shows 0
 *
 * @c: the char in ascii code
 *
 * Return: 1 for lower, 0 for upper
 */
int _islower(int c)
{
	if (c >=97 && <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
