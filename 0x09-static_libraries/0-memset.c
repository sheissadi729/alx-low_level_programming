#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: first number of bytes to fill
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
