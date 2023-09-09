#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	return (0);
}
