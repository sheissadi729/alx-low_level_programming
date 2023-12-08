#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
