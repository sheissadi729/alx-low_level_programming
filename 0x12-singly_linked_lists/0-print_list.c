#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to (the 1st element of) a list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
