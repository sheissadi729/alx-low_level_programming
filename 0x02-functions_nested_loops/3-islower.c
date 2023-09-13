#include "main.h"
/**
 * _islower - A  function that checks for lowercase character.
 * @c: character to check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	int result;

	if (c <= 122 && c >= 97)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
