#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);

	if (separator == NUll)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (i != (n - 1))
			printf("%s", separator);
		printf("\n");
	}
	va_end(lst);
}
