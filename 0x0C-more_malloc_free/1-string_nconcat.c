#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to take from s2
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	if (n < j)
	{
		for (l = 0; l < n && s2[l] != '\0'; l++)
		{
			p[k + l] = s2[l];
		}
	}
	else
	{
		for (l = 0; s2[l] != '\0'; l++)
			p[k + l] = s2[l];
	}

	p[k + l] = '\0';
	return (p);
}
