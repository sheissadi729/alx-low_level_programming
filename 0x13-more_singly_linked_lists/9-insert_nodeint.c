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
	listint_t *temp, *new, *move;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if ((new == NULL) || (head == NULL))
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		temp = *head;
		for (i = 0; i < idx; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		if (temp->next == NULL)
		{
			temp->next = new;
			new->n = n;
			new->next = NULL;
		}
		move = temp;
		temp = new;
		new->n = n;
		new->next = move;
	}
	return (temp);
}
