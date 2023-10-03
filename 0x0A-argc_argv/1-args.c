#include <stdio.h>
/**
 * main - a program that prints the number of arguments
 * @argc: number of arguments of the program
 * @argv: pointer to an array of the strings (arguments)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
