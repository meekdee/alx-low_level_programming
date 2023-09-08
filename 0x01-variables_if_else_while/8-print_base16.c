#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out all the numbers of base 16
 * in lowercase, followed by a new line.
 * Start with 0 to f
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexDec[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hexDec[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
