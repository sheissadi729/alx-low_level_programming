#include "main.h"
/**
 * *infinite_add adds two numbers
 * @n1: first number
 * @n2: second number 
 * @r: buffer that contains the result
 * @size_r: size of the buffer
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, m, l, ll;
	int l1 = 0;
	int l2 = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
		l1 += 1;
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
		l2 += 1;
	}
	if (l1 > l2)
	{
		l = l1;
		ll = l2;
	}
	else
	{
		l = l2;
		ll = l1;
	}
	if (ll > size_r)
	{
		r = '\0';
	}
	else
	{
		for (k = 0; k < l; k++)
		{
			if ((n1[l1 - k - 1] + n2[l2 - k - 1]) > 9)
			{
				r[size_r - k - 1] = (n1[l1 - k - 1] + n2[l2 - k - 1]) % 10;
				r[size_r - k - 2] = ((n1[l1 - k - 1] + n2[l2 - k - 1]) / 10);
			}
			else
			{
				r[size_r - k - 1] = n1[l1 - k - 1] + n2[l2 - k - 1];
			}
		}
		for (m = 0; m < ll - l; m++)
		{
			if (l1 > l2)
				r[size_r - m - l] = n1[l1 - m - l];
			else
				r[size_r - m - l] = n2[l2 - m - l];
		}
	}
	return (r);
}
