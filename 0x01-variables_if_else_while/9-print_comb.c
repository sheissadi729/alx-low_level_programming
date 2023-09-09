#include <stdio.h>
/**
 * main - A program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
