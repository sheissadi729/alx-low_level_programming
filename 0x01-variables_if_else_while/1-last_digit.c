#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - A program that prints a line using printf function
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int a = 10;
int c;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
c = n % a;
if (c > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, c);

else if (c == 0)
	printf("Last digit of %d is %d and is 0\n", n, c);

else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
return (0);
}
