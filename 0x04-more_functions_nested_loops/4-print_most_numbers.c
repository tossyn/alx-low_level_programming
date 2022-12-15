#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers from 0-9
 * followed by a new line
 */

void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		if (c != '2')
		{
			if (c != '4')
			{
				_putchar(c);
			}
		}
		c++;
	}
	_putchar('\n');
}
