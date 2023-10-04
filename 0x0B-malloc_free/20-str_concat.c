#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to a newly allocated space in memory which contains
 * s1 + s2, or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
	{
		s1 = NULL ? p = _strcat(p, s2) : p = _strcat(p, s1);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		p = "";
	}
	else
	{
		p = _strcat(p, s1);
		p = _strcat(p, s2);
	}
	return (p);
}
/**
 * *_strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
