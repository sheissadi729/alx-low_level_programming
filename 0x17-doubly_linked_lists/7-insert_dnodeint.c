#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the node to add
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new, *add;
	unsigned int i = 0;

	if (idx == 0)
		return (NULL);
	if (*h == NULL)
	{
		add = add_dnodeint_end(h, n);
		return (add);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = new;
	temp2->prev = new;
	new->next = temp2;
	new->prev = temp;
	return (new);
}
