#include <stdio.h>

/**
* main - main function
* Return: 0 on sucess
*/

int main(void)
{
	int s = 97;
	int e = 122;

	while (s <= e)
	{
		if (s != 101 || s != 113)
		{
			putchar(s);
		}
		s++;
	}

	putchar('\n');

	return (0);
}
