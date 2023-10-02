#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int result = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		result += 1;
	}
	return (result);
}
