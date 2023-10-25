#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: integer in the node data
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if ((new == NULL) || (head == NULL))
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		for (i = 0; temp && i < idx - 1; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
