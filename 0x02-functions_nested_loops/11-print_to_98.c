#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98 followed by a new line
 * @n: input number
 */

void print_to_98(int n)
{
	int count;

		if (n > 98)
		{
			for (count = n; count > 98; --count)
				printf("%d ", count);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			for (count = n; count < 98; ++count)
				printf("%d ", count);
		_putchar(',');
		_putchar(' ');
		}

		printf("98\n");
}
