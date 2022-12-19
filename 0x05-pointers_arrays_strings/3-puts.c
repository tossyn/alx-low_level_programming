#include "main.h"

/**
 * _puts - a function that prints a string, followed by a newline
 * @s: string to print
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
