#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the first element of the list
 * @str: string to duplicate in the node added
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int result = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		result += 1;
	}
	return (result);
}
