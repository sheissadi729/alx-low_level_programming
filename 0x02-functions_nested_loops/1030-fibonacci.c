#include <stdio.h>
/**
 * main - A program that prints the sum of the even-valued
 * terms in the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int i;
	unsigned long x;
	unsigned long s = 2;

	while (1)
	{
		x = a + b;
		if (x <= 4000000)
		{
			a = b;
			b = x;
			if (x % 2 == 0)
				s += x;
		}
		else
		{
			break;
		}
	}
	printf("%lu\n", s);
	return (0);
}
