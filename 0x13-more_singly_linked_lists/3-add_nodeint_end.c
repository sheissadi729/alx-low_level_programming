#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: double pointer the first element of the list
 * Return: adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{	
			temp = temp->next;
		}
		temp->next = new;
	}
	new->n = n;
	new->next = NULL;
	return (temp);
}
