#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node of the list
 * @index:  index of the node, starting from 0
 * Return: nth node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
