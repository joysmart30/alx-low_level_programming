#include <stdio.h>
/**
 * main -entry point
 * code by Joy
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
