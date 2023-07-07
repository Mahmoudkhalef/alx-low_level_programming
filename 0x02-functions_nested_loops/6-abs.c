#include "main.h"

/**
 * _abs - function that computs the absolute
 *	value of an integer
 *
 * @n: takes in integer type input fpr function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
