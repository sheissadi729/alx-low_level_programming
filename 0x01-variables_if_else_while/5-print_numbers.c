#include <stdio.h>
/**
 * main -A program that prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(10);
	return (0);
}
