#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @a: pointer to the string
 * Return: pointer to the string
 */
char *cap_string(char *a)
{
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] -= 32;
		}
		else
		{
			j = i - 1;
			if (a[j] == 46 || a[j] == 59 || a[j] == 63 || a[j] == 123)
			{
				if (a[i] >= 97 && a[i] <= 122)
					a[i] -= 32;
			}
			else if ((a[j] >= 32 && a[j] <= 34) || a[j] == 40 || a[j] == 41)
			{
				if (a[i] >= 97 && a[i] <= 122)
					a[i] -= 32;
			}
			else if (a[j] == 9 || a[j] == 10 || a[j] == 44 || a[j] == 125)
			{
				if (a[i] >= 97 && a[i] <= 122)
					a[i] -= 32;
			}
		}
	}
	return (a);
}
