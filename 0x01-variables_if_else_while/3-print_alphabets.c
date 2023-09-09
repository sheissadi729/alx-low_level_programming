#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * and in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i >= 97 && i <= 122)
	{
	putchar(i);
	i++;
	}
	while (j >= 65 && j <= 90)
	{
	putchar(j);
	j++;
	}
	putchar(10);
	return (0);
}
