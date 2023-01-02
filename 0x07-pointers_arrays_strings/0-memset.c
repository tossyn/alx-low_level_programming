#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: first bytes of memory area
 * @b: constant byte b
 * @s: pointed memory area
 * Return: 'char' a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
