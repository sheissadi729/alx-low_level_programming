#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * Return: integer < 0 is s1 < s2
 * > 0 if s1 > s2 and 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}
	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (i - j);
}
