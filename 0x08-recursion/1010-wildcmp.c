#include "main.h"
/**
 * wildcmp - compares 2 strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 *
 * Return: 1 if the strings can be considered identical
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int l1 = _strlen_recursion(s1);
	int l2 = _strlen_recursion(s2);

	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if ((*s1 != '\0') || (*s2 == '*'))
	{
		if (s1[l1 - 1]  == s2[l2 - 1])
			return (wildcmp((s1 + 1), (s2 + 1)));
		else
			return (0);
	}
	if ((*s1 == '\0') || (*s2 == '*'))
		return (0);
	else if ((*s1 == *s2) || (*s2 == '*'))
		return (wildcmp((s1 + 1), (s2 + 1)));
	else if (*s1 != *s2)
		return (0);
	return (1);
}
