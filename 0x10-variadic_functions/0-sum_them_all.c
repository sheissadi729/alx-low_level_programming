#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters to sum
 * Return: sum, return 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
