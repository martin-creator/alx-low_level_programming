#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: this is the linked list
 *
 * @index: is the index of the node starting at zero
 *
 * Return: if the node does not exist it returns zero
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *current = head;
unsigned int i = 0;

for (i = 0; i <= index; i++)
{
	if (current->next == NULL)
	{
		return (NULL);
	}
	current = current->next;
}

if (current->next == NULL)
{
	return (NULL);
}

return (current);
}
