#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string
 * Return: the integer, otherwise 0 if no int in the string
 */
int _atoi(char *s)
{
	int i;
	unsigned int result = 0;
	unsigned int last_digit;
	int sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			last_digit = s[i] - '0';
			result = result * 10 + last_digit;
			if (s[i + 1] > '9' || s[i + 1] < '0')
			{
				break;
			}
		}
		else if (s[i] > '9' || s[i] < '0')
		{
			continue;
		}
	}
	return (result * sign);
}
