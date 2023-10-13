#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *x;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(lst, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
	}
	va_end(lst);
}
