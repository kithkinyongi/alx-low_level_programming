#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 48;
	int k;

	while (i <= 57)
	{
		int j = i + 1;

		while (j <= 57)
		{
			for (k = j + 1; k <= 57 ; k++)
			{
				if (i != j && j != k && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
					else
						putchar('\n');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
