#include "main.h"

/**
* more_numbers - prints 10 times the numbers form 0 to 14,
* followed by a new line
*/

void more_numbers(void)
{
	int num;
	int i;

	i = 0;

	while (i < 10)
	{
		num = 0;
		while (num <= 14)
		{
			_putchar(num + '0');
			num++;
		}
		_putchar('\n');
		i++;
	}
}
