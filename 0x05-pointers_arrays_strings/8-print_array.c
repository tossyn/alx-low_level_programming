#include "main.h"

/**
 * print_array - a function to print n elements of an array of integers
 * @n: number of elements in the array
 * @a: array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			prinf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("/n");
}
