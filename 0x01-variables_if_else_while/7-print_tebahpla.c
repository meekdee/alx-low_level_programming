#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out all the alphabet in lowercase,
 * in reverse, followed by a new line.
 * Start with the letter 'z', Loops from 'z' to 'a'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);
}
