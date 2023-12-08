#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;

	if (head != NULL)
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
		free(temp);
	}
}
