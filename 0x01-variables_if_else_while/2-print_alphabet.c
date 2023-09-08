#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out all the alphabet in lowercase,
 * followed by a new line.
 * Start with the letter 'a', Loops from 'a' to 'z'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
