#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies 2 positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 98 (failure)
 */
int main(int argc, char *argv[])
{
	char err[] = "Error\n";
	int i, j;
	int size = 4;
	int size2 = 4;
	int num1, num2, res;
	int *p1 = NULL;
	int *p2 = NULL;
	int *p3 = NULL;

	if (argc != 3)
	{
		i = 0;
		while (err[i] != '\0')
		{
			_putchar(err[i]);
			i++;
		}
		exit(98);
	}
	num1 = __atoi(argv[1]);
	num2 = __atoi(argv[2]);
	res = num1 * num2;
	p1 = malloc(size * sizeof(int));
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		p1[i] = num1;
		if (i == size)
			p1 = _realloc(p1, (size * sizeof(int)), (2 * size * sizeof(int)));
	}
	p2 = malloc(size2 * sizeof(int));
	for (j = 0; argv[2][j] != '\0'; j++)
	{
		p2[j] = num2;
		if (i == size2)
			p2 = _realloc(p1, (size2 * sizeof(int)), (2 * size2 * sizeof(int)));
	}
	p3 = malloc((size * size2) * sizeof(int));
	*p3 = res;
	putint(res);
	_putchar('\n');
	free(p1);
	free(p2);
	free(p3);
	return (0);
}
/**
 * __atoi - converts a string to an integer.
 * @s: pointer to the string
 * Return: the integer, otherwise 98 if no int in the string
 */
int __atoi(char *s)
{
	int i, j;
	unsigned long int result = 0;
	unsigned long int last_digit;
	char err[] = "Error\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			last_digit = s[i] - '0';
			result = result * 10 + last_digit;
		}
		else
		{
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(err[j]);
				j++;
			}
			exit(98);
		}
	}
	return (result);
}
/**
 * putint - prints an integer
 * @n: integer to print
 */
void putint(int n)
{
	if (n >= 10)
	{
		putint(n / 10);
	}
	_putchar((n % 10) + '0');
}
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
	int *p = NULL;
	int *intptr = (int *) ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (p);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = intptr[i];
	}
	return (p);
}
