#include "main.h"
/**
 * _isdigit - checks if a value is a digit range from 0 to 9
 * @c: digit to be checked
 *
 * Return: 1 (is digit) 0 (not a digit)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
