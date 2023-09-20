#include <stdio.h>
/**
 * main - A program that prints the first 98 fibonnaci numbers
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	int i;
	unsigned long x;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		x = a + b;
		printf("%lu", x);
		a = b;
		b = x;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
