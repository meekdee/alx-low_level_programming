#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out all single digit numbers
 * of base 10 starting from 0
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");
	return (0);
}
