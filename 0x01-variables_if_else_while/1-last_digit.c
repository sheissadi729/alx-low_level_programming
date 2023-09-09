#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - A program that assign a random number to the variable n.
 * Description - The program prints the last digit of
 * the number stored in the variable n.
 * Return: 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (x == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	/* your code goes there */
	return (0);
}
