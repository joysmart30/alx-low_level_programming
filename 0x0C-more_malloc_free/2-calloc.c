#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of one byte of element
 *
 * Description
 * - The memory is set to zero
 * - If nmemb or size is 0, then _calloc returns NULL
 * - If malloc fails, then _calloc returns NULL
 *   Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;

	return (a);
}
