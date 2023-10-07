#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies 2 positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 98 (failure)
 */
int main(int argc, char *argv[])
{
	char err[] = "Error\n";
	int i;
	unsigned long int num1, num2, res;

	if (argc != 3)
	{
		i = 0;
		while (err[i] != '\0')
		{
			_putchar(err[i]);
			i++;
		}
		exit(98);
	}
	num1 = __atoi(argv[1]);
	num2 = __atoi(argv[2]);
	res = num1 * num2;
	putint(res);
	_putchar('\n');
	return (0);
}
/**
 * __atoi - converts a string to an integer.
 * @s: pointer to the string
 * Return: the integer, otherwise 98 if no int in the string
 */
int __atoi(char *s)
{
	int i, j;
	unsigned long int result = 0;
	unsigned long int last_digit;
	char err[] = "Error\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			last_digit = s[i] - '0';
			result = result * 10 + last_digit;
		}
		else
		{
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(err[j]);
				j++;
			}
			exit(98);
		}
	}
	return (result);
}
/**
 * putint - prints an integer
 * @n: integer to print
 */
void putint(int n)
{
	if (n >= 10)
	{
		putint(n / 10);
	}
	_putchar((n % 10) + '0');
}
