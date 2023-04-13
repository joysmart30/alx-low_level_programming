#include <main.h>
/**
 * _memset - fill a block of memory with a specifit value
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
