#include <stdio.h>

/**
* main - main function
* Return: 0 on sucess
*/

int main(void)
{
	int s = 0;
	int e = 9;

	while (s <= e)
	{
		putchar(s + '0');

		if (s != e)
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}

	putchar('\n');

	return (0);
}
