#include "main.h"
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
	if (src[j] == '\0')
	{
		dest[j] = '\0';
	}
	return (dest);
}
