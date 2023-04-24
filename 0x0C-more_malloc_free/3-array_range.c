#include "main.h"

/**
 * array_range - a function tht creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Description:
 * The array created should contain all the values from min (included) to max
 * (included), ordered from min to max
 * - If min > max, return NULL
 *   If malloc fails, return NULL
 *
 *   Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
