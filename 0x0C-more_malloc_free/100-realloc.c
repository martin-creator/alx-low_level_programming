#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory and copy over old values
 * @ptr: the pointer to the previously allocated memory
 * @osz: original size of buffer
 * @nsz: new size of buffer
 * Return: pntr to newly assigned memory, with values copied
 */
void *_realloc(void *ptr, unsigned int osz, unsigned int nsz)
{
	unsigned int i;
	char *dest, *orig = ptr;

	/* new_size == old_size rtrn ptr */
	if (osz == nsz)
		return (ptr);

	if (nsz == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		free(ptr);
		return (malloc(nsz));
	}

	dest = malloc(nsz);
	if (dest == NULL)
		return (NULL);

	/* copy values from input pointer to dest */
	for (i = 0; i < osz; ++i)
		dest[i] = orig[i];

	free(ptr);
	return (dest);
}
