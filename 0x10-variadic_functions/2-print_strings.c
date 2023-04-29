#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * @: A variable number of strings to be printed.
 * Return: Always 0
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL,(nil is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
