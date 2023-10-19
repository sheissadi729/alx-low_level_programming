#include "3-calc.h"
/**
 * op_add - sums
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sums of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract
 * @a: 1st integer
 * @b: 2nd integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: 1st integer
 * @b: 2nd integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division
 * @a: 1st integer
 * @b: 2nd integer
 * Return: modulo of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
