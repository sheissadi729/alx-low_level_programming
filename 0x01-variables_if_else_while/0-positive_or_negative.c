#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints a line using printf function
 * Return: 0 (Sucess)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("n is positive");

else if (n < 0)
	printf("n is negative");

else
	printf("n is zero");
return (0);
}
