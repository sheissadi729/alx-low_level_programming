#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: pointer to 1st node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
