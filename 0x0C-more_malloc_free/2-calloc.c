#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: number of bytes of the type of an element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (malloc(nmemb * size) != NULL)
		return (malloc(nmemb * size));
	else
		return (NULL);
}