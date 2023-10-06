#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) != NULL)
		return (malloc(b));
	exit(98);
}
