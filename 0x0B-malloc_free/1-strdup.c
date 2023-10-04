#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies a string
 * @str: pointer to the string
 * Return: pointer to a newly allocated space in memory
 * NULL if str = NULL or operation fails
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	p = _strncpy(p, str, i);
	return (p);
}
/**
 * *_strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytess from src it uses
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
