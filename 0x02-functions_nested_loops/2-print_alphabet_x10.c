#include "main.h"

/**
 *print_alphabet_X10 - prints alphabet 10 time
 *Return: void
 */

void print_alphabet_X10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
