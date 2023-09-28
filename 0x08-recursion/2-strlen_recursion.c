#include "main.h"
/**
 * _strlen_recursion - outputs the size of a string
 * @s: string to be evaluated
 *
 * Return: size of the string
 */
int _strlen_recursion(char *s)
{
	int j = 1;

	if (s[0] != '\0')
	{
		j++;
		j += _strlen_recursion(s + 1);
	}
	return (j - 1);
}
