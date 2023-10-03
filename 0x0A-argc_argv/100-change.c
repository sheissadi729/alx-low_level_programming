#include <stdio.h>
#include <stdlib.h>
int calc(int num);
/**
 * main - a program that prints its name
 * @argc: number of arguments of the program
 * @argv: pointer to an array of the strings (arguments)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result, num;
	char *argument = argv[1];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (argument[0] == '-')
		{
			printf("0");
		}
		else
		{
			num = atoi(argument);
			result = calc(num);
			printf("%d\n", result);
		}
	}
	return (0);
}
/**
 * calc - calculates  the minimum number of coins
 * @num: number we make change for
 * Return: the number
 */
int calc(int num)
{
	int i, res, rem;
	int div[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (num >= div[i])
		{
			res = num / div[i];
			rem = num % div[i];
			if (rem == 0)
				return (res);
			else
				return (res + calc(rem));
		}
	}
	return (0);
}
