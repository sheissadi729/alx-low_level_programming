#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - a program that adds positives numbers
 * @argc: number of arguments of the program
 * @argv: pointer to an array of the strings (arguments)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *argument = argv[i];

			for (j = 0; argument[j] != '\0'; j++)
			{
				if (isdigit(argument[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
