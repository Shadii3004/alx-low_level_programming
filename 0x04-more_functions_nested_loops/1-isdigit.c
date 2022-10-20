#include "main.h"

/**
 * _isdigit - checks for a digits from 0 through 9
 * @c: the digit to be checked
 * Return: 1 if digit is zero to nine and 0 if otherwise
 */

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
