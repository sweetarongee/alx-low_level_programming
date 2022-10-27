#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: points to the head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	next_node = *head;
	*head = (*head)->next;
	free(next_node);

	return (n);
}
