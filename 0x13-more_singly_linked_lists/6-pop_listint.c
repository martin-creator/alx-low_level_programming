#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t
 *
 * @head: linked list
 *
 * Return: 0 if linked list if empty
 *
 */

int pop_listint(listint_t **head)
{
listint_t *next_node = NULL;
int retVal = 0;

if (*head == NULL)
{
	return (0);
}

next_node = (*head)->next;
retVal = (*head)->n;
free(*head);
*head = next_node;
return (retVal);
}
