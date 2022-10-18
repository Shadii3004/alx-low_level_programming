#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: is the number that we will return its last digit
 * Return: an integer that is the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar('0' + x);

	return (x);
}
