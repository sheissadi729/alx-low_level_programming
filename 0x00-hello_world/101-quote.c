#include <unistd.h>
#include <string.h>
#include <stdio.h>
/**
 * main - A program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: 1 (success)
 */
int main(void)
{
	const char *m = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, m, strlen(m));
	return (1);
}
