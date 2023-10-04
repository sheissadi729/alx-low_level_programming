#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character to initialize it with
 * Return: pointer to the array, NULL if it fails
 * or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size);
	if ((p == NULL) || (size == 0))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
