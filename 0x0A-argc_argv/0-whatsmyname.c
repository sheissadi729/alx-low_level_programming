#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of arguments of the program
 * @argv: pointer to an array of the strings (arguments)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
