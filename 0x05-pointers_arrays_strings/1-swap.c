#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to integer to swap
 * @b: pointer to integer to swap
 */
void swap_int(int *a, int *b)
{
	int ch = *a;

	*a = *b;
	*b = ch;
}
