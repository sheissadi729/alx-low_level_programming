#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (calc_sqrt(n, 1));
}
/**
 * calc_sqrt - calculates the natural square root of a number
 * @n: number
 * @guess: guess to the square root of n
 * Return: natural square root of n
 */
int calc_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (calc_sqrt(n, guess + 1));
}
