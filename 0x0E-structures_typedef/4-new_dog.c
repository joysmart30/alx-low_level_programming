#include "dog.h"
#include <stdlib.h>

/**
 * _strncpy - Copies at most an inputted number of bytes from
 * string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; indext++)
		dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - is a function that initializes a variable
 * @name: is a pointer to a char array
 * @age: is an integer value
 * @owner: is a pointer to a char array
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i = 0;
	size_t j = 0;
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
	{
		exit(0);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	(*d).owner = malloc(j + 1);
	(*d).name = malloc(i + 1);
	if ((*d).owner == NULL || (*d).name == NULL)
	{
		exit(0);
	}
	_strncpy((*d).name, name, i + 1);
	_strncpy((*d).owner, owner, j + 1);
	(*d).age = age;

	return (d);
}
