#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node of a listint_t linked list
 * @head: double pointer to the first node
 * @index: index of the list where the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *before, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		temp = *head;
		for (i = 0; i < index; i++)
		{
			before = temp;
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		before->next = temp;
		next = temp->next;
		free(temp);
		before->next = next;
	}
	return (1);
}
