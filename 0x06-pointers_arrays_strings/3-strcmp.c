#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: to be compared to s2
 * @s2: to be compared to s1
 *
 * Return: 0 (same) -15 (s2 greater than s1)
 * 15 ( s1 greater than s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s2[i] > s1[i])
			return (-15);
		else
			return (0);
	}
}
