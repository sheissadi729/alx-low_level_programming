#include <stdio.h>
/**
 * main -A program that prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
