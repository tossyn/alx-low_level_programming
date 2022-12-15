#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 - 9,
 * followed by a new line
 */

void print_numbers(void)
{
	char c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
