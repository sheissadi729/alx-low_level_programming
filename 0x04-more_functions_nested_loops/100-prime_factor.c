#include <stdio.h>
/**
 * main - A program that prints the largest prime
 * factor of the number 612852475143.
 * Return: 0 (success)
 */
int main(void)
{
	long i = 612852475143;
	long factor;
	long largest_prime;

	while (i % 2 == 0)
	{
		largest_prime = 2;
		i /= 2;
	}
	for (factor = 3; factor * factor <= i; factor += 2)
	{
		while (i % factor == 0)
		{
			largest_prime = factor;
			i /= factor;
		}
		if (i > 2)
		{
			largest_prime = i;
		}
	}
	printf("%lu\n", largest_prime);
	return (0);
}
