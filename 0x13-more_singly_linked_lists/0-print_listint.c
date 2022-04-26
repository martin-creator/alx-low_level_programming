#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @counter: counts number of nodes
 *
 * @h: linked list
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{

const listint_t *current = h;
size_t counter = 0;

while (current != NULL)
{

	printf("%i\n", current->n);
	current = current->next;
	counter++;

}
return (counter);
}
