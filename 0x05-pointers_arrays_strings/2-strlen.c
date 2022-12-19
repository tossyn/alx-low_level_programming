#include "main.h"

/**
 * _strlen - a function to return the lenght of a string
 * @s: string to get the lenght
 * Return: the len of s
 */

int_strlen(char *s)
{
	int a;

	for (a = 0; *s++;)
		a++;
	return (a);
}
