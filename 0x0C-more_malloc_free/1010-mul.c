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
	int i, l1, l2;
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
	l1 = len_array(argv[1]);
	l2 = len_array(argv[2]);
	p1 = malloc(l1 * sizeof(int));
	p2 = malloc(l2 * sizeof(int));
	num1 = __atoi(argv[1]);
	*p1 = num1;
	num2 = __atoi(argv[2]);
	*p2 = num2;
	p3 = malloc ((l1 + l2) * sizeof(int));
	res = num1 * num2;
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
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < old_size && i <  new_size; i++)
				*((char *)temp_block + i) = *((char *) ptr + i);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
/**
 * array_range - creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
/**
 * len_array - calculates the lenght of an array
 * @s: array
 * Return: lenght of the array
 */
int len_array(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
	}
	return (i);
}
