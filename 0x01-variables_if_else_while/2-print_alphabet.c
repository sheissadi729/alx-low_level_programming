#include <stdio.h>
/**
 * main - A program that prints the alphabet
 * Return: 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i >= 97 && i <= 122)
	{
	putchar(i);
	i++;
	}
	putchar(10);
	return (0);
}
