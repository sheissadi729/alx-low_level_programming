#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies
 * @argc: number of arguments of the program
 * @argv: pointer to an array of the strings (arguments)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) *  atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
