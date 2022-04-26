#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t * current = head;

	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
