#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL) /* This checks backwards for intactness */
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
