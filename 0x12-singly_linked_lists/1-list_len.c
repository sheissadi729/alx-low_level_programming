#include "lists.h"
/**
 * list_len - returns number of elements in a list_t list
 * @h: pointer to (the 1st element of) a list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
