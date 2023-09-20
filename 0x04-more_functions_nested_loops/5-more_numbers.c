#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 0 ; j <= 14 ; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}
}
