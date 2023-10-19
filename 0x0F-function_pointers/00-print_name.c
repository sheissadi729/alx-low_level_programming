#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to the string of the name to print
 * @f: pointer to a function that takes a string as
 * an argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
