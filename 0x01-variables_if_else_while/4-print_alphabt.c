#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function would print out all the alphabet in lowercase,
 * except for letter e and q,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}

	putchar('\n');

	return (0);
}
