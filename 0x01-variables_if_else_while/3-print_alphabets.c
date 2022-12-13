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
		putchar(s);
		s++;
	}

	s = 65;
	e = 90;

	while (s <= e)
	{
		putchar(s);
		s++;
	}

	putchar('\n');

	return (0);
}
