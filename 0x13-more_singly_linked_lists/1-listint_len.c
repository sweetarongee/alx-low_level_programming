#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: points to the first node
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
