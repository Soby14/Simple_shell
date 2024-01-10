#include "shell.h"

/**
 * _calloc - Allocate memory for an array using malloc.
 *
 * @nmember: The number elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory or NULL if allocation falls.
 */

void *_calloc(unsigned int nmember, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (nmember == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmember * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < (nmember * size); index++)
		ptr[index] = 0;

	return (ptr);
}


