#include "main.h"
/**
 * is_palindrome -checks if a string is a palindrome
 * @s: pointer to the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (f(s, 0, l - 1));
}
/**
 * f - checks if a string is a palindrome
 * @s: pointer to the string
 * @start: start of the new string
 * @end: end of the new string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int f(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	else
		return (f(s, start + 1, end - 1));
}
