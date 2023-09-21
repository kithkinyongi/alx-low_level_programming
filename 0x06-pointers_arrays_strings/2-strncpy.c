#include "main.h"
/**
 * _strncpy - copy a part of a string to destination sting
 * @dest: destination string
 * @src: source string
 * @n: size of source to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
