#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	int i = 0, j = 0;
	double y;
	char *x;
	int flag;

	while (format[j])
	{
		j++;
	}
	va_start(lst, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 's':
			{
				x = va_arg(lst, char *);
				if (x == NULL)
					x = "";
				printf("%s", x);
				flag = 0;
				break;
			}
			case 'c':
			{
				printf("%c", va_arg(lst, int));
				flag = 0;
				break;
			}
			case 'i':
			{
				printf("%i", va_arg(lst, int));
				flag = 0;
				break;
			}
			case 'f':
			{
				y = va_arg(lst, double);
				printf("%f", y);
				flag = 0;
				break;
			}
			default:
			{
				flag = 1;
				break;
			}
		}
		if (i != ( - 1) && flag != 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lst);
}
