#include "main.h"
/*
 * _isalpha - shows 1 if the input is a
 * letter, otherwise shows 0
 *
 * @c: the char in ascii code
 *
 * Return: 1 for letters, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
