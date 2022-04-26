#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints number of elements of a listint_t list
 *
 * @counter: counts number of elements
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{

const listint_t *current = h;
size_t counter = 0;

while (current != NULL)
{
	current = current->next;
	counter++;

}
return (counter);
}

