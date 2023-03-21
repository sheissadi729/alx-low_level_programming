#include <stdio.h>
/**
 * main - a program that prints numbers from 0 to 9
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 'z';
	int n = 10;

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar(n);
	return (0);
}
