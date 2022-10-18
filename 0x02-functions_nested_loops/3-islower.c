#include "main.h"

/**
 *_islower - check if a char is lower case
 *Return: 1 if the character is lower and 0 if otherwise
 *@c: is the char to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
