#include "main.h"

/**
 * _isupper - checks for upper case character
 * Return: 1 if character is upper and 0 if otherwise
 * @c: is the char to be checked
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
