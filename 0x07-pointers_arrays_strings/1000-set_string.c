#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: adress of a pointer to the string we set to a char
 * @to: pointer to the string we set s to.
 */
void set_string(char **s, char *to)
{
	int i, j;

	for (j = 0; **(s + j) != '\0'; j++)
	{

	}
	for (i = 0; to[i] != '\0'; i++)
	{
		**(s + i) = to[i];
	}
	if (i < j)
	{
		for (; i <= j; i++)
		**(s + i) = '\0';
	}
}
