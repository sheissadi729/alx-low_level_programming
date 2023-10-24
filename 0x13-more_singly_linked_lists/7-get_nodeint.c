#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: pointer to a listint_t list node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p;

	p = head;
	for (i = 0; i < index; i++)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
