#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		*head = NULL;
	}
}
