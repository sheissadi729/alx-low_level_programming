#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int i;
	int j;
	char ch;
	int l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		l += 1;
	}
	for (i = 0; i != l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}

/**
 * *infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that contains the result
 * @size_r: size of the buffer
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, digit1, digit2, sum;
	int carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
	}
	i--;
	j--;
	if (i > size_r - 3 || j > size_r - 3)
	{
		return (0);
	}
	else
	{
		for (k = 0; i >= 0 || j >= 0 || carry > 0; k++)
		{
			digit1 = i >= 0 ? n1[i] - '0' : 0;
			digit2 = j >= 0 ? n2[j] - '0' : 0;
			sum = digit1 + digit2 + carry;
			carry = sum / 10;
			if (k < size_r - 1)
				r[k] = (sum % 10) + '0';
			if (i >= 0)
				i--;
			if (j >= 0)
				j--;
		}
		r[k] = '\0';
	}
	rev_string(r);
	return (r);
}
