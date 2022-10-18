#include "main.h"

/**
 *_isalpha - checks for alphabetic character
*Return: 1 if it islowercase or uppercase and 0 if otherwis
*@c: is the char to be checked
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
