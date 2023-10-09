#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: number of bytes of the type of an element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = NULL;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = (malloc(nmemb * size));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; p[i] != '\0'; i++)
			p[i] = 0;
	}
	return (p);
}
