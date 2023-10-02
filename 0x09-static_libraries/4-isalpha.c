#include "main.h"
/**
 * _isalpha - A  function that checks for alphabetic character.
 * @c: character to check
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int result;

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
