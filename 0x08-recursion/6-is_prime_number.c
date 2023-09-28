#include "main.h"
/**
 * is_prime_number - checks if an int is a prime number
 * @n: number
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (calc_prime(n, 2));
}
/**
 * calc_prime - checks if n is composed by guess
 * @n: number
 * @guess: checks is guess multiplied is equal to n
 * Return: 0 if the input integer is a prime number
 * otherwise return 0
 */
int calc_prime(int n, int guess)
{
	if (n % guess == 0)
		return (0);
	else if ((n / guess != 0) && (guess * guess > n))
		return (1);
	else
		return (calc_prime(n, guess + 1));
}
