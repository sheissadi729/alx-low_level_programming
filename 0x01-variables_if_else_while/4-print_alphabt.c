#include <stdio.h>
/**
 * main - A program that prints the alphabet
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
