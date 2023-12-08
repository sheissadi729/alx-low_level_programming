#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of a linked list
 * Return: number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
