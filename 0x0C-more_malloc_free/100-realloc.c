#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the newly allocated space, or NULL
 * if failure or if new_size is equal to zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;
	int *intptr = (int *) ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		p = malloc(new_size);
		if (new_size == old_size)
			return (ptr);
		if (p == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < old_size && i < new_size; i++)
			{
				p[i] = intptr[i];
			}
			return (p);
		}
	}
}
