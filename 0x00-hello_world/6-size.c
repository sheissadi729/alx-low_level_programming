#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
	size_t c = sizeof(char);
	size_t i = sizeof(int);
	size_t l = sizeof(long);
	size_t ll = sizeof(long long int);
	size_t f = sizeof(float);
	
	printf("Size of a char: %zu byte(s)\n", c);
	printf("Size of an int: %zu byte(s)\n", i);
	printf("Size of a long int: %zu byte(s)\n", l);
	printf("Size of a long long int: %zu byte(s)\n", ll);
	printf("Size of a float: %zu byte(s)\n", f);
	return (0);
}
