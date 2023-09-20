#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytess from src it uses
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	if (j < n)
	{
		dest[i + j] = '\0';
	}
	return (dest);
}
