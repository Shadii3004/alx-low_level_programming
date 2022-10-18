#include "main.h"

/**
 * print_alphabet_x10 - print alphabet times ten
 */

void print_alphabet_x10(void)
{
	char ch;
	int x = 0;

	while (x++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
