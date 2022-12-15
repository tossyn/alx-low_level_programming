#include "main.h"

/**
 * print_diagonal - a function that draws line on the terminal
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
