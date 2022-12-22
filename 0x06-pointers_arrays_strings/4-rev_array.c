#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: int arrat
 * @n: int length
 */

void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
