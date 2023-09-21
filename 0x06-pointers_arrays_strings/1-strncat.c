#include "main.h"
/**
 * _strncat -appends a string to a specified direction
 * @dest: the one to be appended on
 * @src: the one to get appended
 * @n: size of sorce string to be appended
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lendest = 0;
	int lensrc = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		lendest++;
	for (i = 0 ; src[i] != '\0' ; i++)
		lensrc++;
	for (i = 0 ; i < n ; i++)
		dest[lendest + i] = src[i];
	return (dest);
}
