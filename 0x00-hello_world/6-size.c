#include <stdio.h>
/**
 * main - Entry point
 *
 * output
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("SIze of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long: %lu bytes(s)\n", sizeof(long long));
	printf("Size of a float:%lu byte(s)\n", sizeof(float));
	return (0);
}
