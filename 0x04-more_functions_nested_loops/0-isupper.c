#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * 0c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isUpper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
