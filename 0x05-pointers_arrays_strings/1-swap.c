#include "main.h"

/**
 * swap_int - a function to swap the values of two ints (a and b)
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
