#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 except 2 and 4
 * Return: the result of the operation
 */

void print_most_numbers(void)
{
	char i;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' || c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
