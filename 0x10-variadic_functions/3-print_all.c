#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	int i = 0;
	int flag;
	int j = _strlen_recursion(format);
	char *x;

	va_start(lst, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 's':
				x = va_arg(lst, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				flag = 0;
				break;
			case 'c':
				printf("%c", va_arg(lst, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (i != (j - 1) && flag != 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lst);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: lenght of the string
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
