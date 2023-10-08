#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
