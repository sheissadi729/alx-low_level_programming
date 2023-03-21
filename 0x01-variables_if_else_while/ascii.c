#include <stdio.h>
/**
 * main - a program that displays the ascii code of numbers
 * Return: 0 (Success)
 */
int main(void)
{
	char ascii;
	/**
	*printf("Please enter a character: ");
	*scanf("%c", &ascii);
	*printf("%i\n", ascii);
	*/
	int integer;

	printf("Please enter a number between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);

	return (0);
}
