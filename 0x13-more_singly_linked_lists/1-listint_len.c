#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of elements in linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
