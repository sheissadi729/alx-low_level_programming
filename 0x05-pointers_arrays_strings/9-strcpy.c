#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer
 * @src: pointer to the string we copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[j] = '\0';
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
