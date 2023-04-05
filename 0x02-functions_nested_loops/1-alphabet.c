#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet
 * Return: 0(sucess)
 */
void print_alphabet(void)
{
	int i = 0;

	for(i = 97; i <=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
