#include "main.h"
/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @a: pointer to the string
 * Return: pointer to the string
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
