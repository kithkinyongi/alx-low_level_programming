#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		for (j = i + 1 ; j <= 57 ; j++)
		{
			if (i != j && j != i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
			}
		}
		i++;
	}
	return (0);
}
